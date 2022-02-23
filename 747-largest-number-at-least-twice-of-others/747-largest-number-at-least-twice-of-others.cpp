class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        int ans;
        for(int i=0;i<n;i++)
        {
            maximum=max(maximum,nums[i]);
            if(maximum==nums[i])
                ans=i;
        }
        for(int i=0;i<n;i++)
        {
            if(maximum!=nums[i] && maximum<(nums[i]*2))
            {
                ans= -1;
            }
        }
        return ans;
    }
};
