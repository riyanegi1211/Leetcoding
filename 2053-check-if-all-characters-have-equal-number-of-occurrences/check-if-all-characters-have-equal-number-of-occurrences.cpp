class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;
        for(int it:s){
            freq[it]++;
        }
        int common = freq.begin()->second;
        for(auto it:freq){
            if(it.second!=common)
                return false;
        }
        return true;
    }
};