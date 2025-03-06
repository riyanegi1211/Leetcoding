class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int len = grid.size();
        int n = len*len;
        vector<int> freq(n + 1, 0);
        int missing = -1, repeated = -1;
        
        for(int i =0;i<len;i++){
            for(int j=0;j<len;j++){
                freq[grid[i][j]]++;
            }
        }

        for(int i = 1; i <= n; i++) {
            if (freq[i] > 1)
                repeated = i;
            else if (freq[i] == 0)
                missing = i;
        }
        return {repeated, missing};
    }
};