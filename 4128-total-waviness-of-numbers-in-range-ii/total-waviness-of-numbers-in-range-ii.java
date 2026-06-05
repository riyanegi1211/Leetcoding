class Solution {
    public long totalWaviness(long num1, long num2) {
        return count(num2) - count(num1 - 1);
    }

    private String s;
    private long[][][][][] cntMemo;
    private long[][][][][] wavMemo;
    private boolean[][][][][] vis;

    private long count(long n) {
        if (n < 0) return 0;

        s = Long.toString(n);

        cntMemo = new long[20][2][2][11][11];
        wavMemo = new long[20][2][2][11][11];
        vis = new boolean[20][2][2][11][11];

        return dfs(0, 1, 0, 10, 10)[1];
    }

    private long[] dfs(int pos, int tight, int started, int prev2, int prev1) {

        if (pos == s.length()) {
            return new long[]{1, 0};
        }

        if (vis[pos][tight][started][prev2][prev1]) {
            return new long[]{
                cntMemo[pos][tight][started][prev2][prev1],
                wavMemo[pos][tight][started][prev2][prev1]
            };
        }

        long totalCnt = 0;
        long totalWav = 0;

        int limit = tight == 1 ? s.charAt(pos) - '0' : 9;

        for (int d = 0; d <= limit; d++) {

            int nextTight = (tight == 1 && d == limit) ? 1 : 0;

            if (started == 0 && d == 0) {
                long[] child = dfs(pos + 1, nextTight, 0, 10, 10);

                totalCnt += child[0];
                totalWav += child[1];
            }
            else if (started == 0) {
                long[] child = dfs(pos + 1, nextTight, 1, 10, d);

                totalCnt += child[0];
                totalWav += child[1];
            }
            else if (prev2 == 10) {
                long[] child = dfs(pos + 1, nextTight, 1, prev1, d);

                totalCnt += child[0];
                totalWav += child[1];
            }
            else {
                int add =
                    ((prev1 > prev2 && prev1 > d) ||
                     (prev1 < prev2 && prev1 < d)) ? 1 : 0;

                long[] child = dfs(pos + 1, nextTight, 1, prev1, d);

                totalCnt += child[0];
                totalWav += child[1] + child[0] * add;
            }
        }

        vis[pos][tight][started][prev2][prev1] = true;
        cntMemo[pos][tight][started][prev2][prev1] = totalCnt;
        wavMemo[pos][tight][started][prev2][prev1] = totalWav;

        return new long[]{totalCnt, totalWav};
    }
}