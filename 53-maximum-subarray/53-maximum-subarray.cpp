class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,n=nums.size();
        if(n==1) return nums[0];
        int lmaxSum=nums[0],gmaxSum=nums[0];
        for(int i=1;i<n;i++)
        {
            lmaxSum=max(lmaxSum+nums[i],nums[i]);
            gmaxSum=max(gmaxSum,lmaxSum);
        }
        return gmaxSum;
    }
};