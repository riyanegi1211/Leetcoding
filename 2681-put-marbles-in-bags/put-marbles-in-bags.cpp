class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        if (k == 1) return 0; 
        
        vector<int> pairSums(n-1);
        
        for (int i = 0; i < n - 1; i++) {
            pairSums[i] = weights[i] + weights[i + 1];
        }
        sort(pairSums.begin(), pairSums.end());
        
        long long minScore = 0, maxScore = 0;
        
        for (int i = 0; i < k - 1; i++) {
            minScore += pairSums[i];
            maxScore += pairSums[n - 2 - i];
        }
        
        return maxScore - minScore;
    }
};