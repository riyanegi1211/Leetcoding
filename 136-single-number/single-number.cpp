class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans=0;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto i:freq){
            if(i.second==1)
                ans=i.first;
        }
        return ans;
    }
};