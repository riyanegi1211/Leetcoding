class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>freq;
        for(char it:s){
            freq[it]++;
        }
        int minEvenFreq = INT_MAX, maxOddFreq = INT_MIN;
        
        for (auto it : freq) {
            if (it.second % 2 == 0) {
                minEvenFreq = min(minEvenFreq, it.second);
            } else {
                maxOddFreq = max(maxOddFreq, it.second);
            }
        }

        if (minEvenFreq == INT_MAX) maxOddFreq = 0;
        return maxOddFreq - minEvenFreq;
    }
};