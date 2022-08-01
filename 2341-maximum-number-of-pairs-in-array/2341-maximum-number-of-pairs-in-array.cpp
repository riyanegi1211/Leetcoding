class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int pair=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                pair++;
                i++;
            }
        }
        int rem=n-(2*pair);
        ans.push_back(pair);
        ans.push_back(rem);
        return ans;
    }
};
