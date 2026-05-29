class Solution {
    public int numberOfSpecialChars(String word) {
        int n = word.length();
        int ans = 0;

        boolean[] low = new boolean[26];
        boolean[] upper = new boolean[26];

        for(char c:word.toCharArray())
        {
            if(c>='a' && c<='z')
                low[c-'a'] = true;
            else
                upper[c-'A'] = true;
        }
        for(int i=0;i<26;i++){
            if(low[i] && upper[i])
                ans++;
        }
    return ans;
    }
}