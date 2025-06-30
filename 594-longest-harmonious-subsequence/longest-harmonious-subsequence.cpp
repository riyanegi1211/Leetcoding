class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto it:nums){
            freq[it]++;
        }
        if(freq.size()==1)
            return 0;
        int maxLen = 0;
        for(auto& [num,count] : freq){
            if (freq.count(num - 1)) 
                maxLen = max(maxLen, count + freq[num - 1]);
        }
        return maxLen;
    }
};