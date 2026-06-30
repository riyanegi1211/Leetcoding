class Solution {
    public int numberOfSubstrings(String s) {
        int n = s.length();
        int[] pos = {-1,-1,-1};
        int ans = 0;

        for(int i=0;i<n;i++){
            pos[s.charAt(i)-'a'] = i;
            ans += 1 + Math.min(pos[0],Math.min(pos[1],pos[2]));
        }
        return ans;
    }
}