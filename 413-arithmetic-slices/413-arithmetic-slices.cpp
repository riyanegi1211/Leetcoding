class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       int result=0;
        int n=nums.size();
        int count=0;
        if(n<=2) return 0;
        for(int i=2;i<n;i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                count++;
            }
            else
                count=0;
            result+=count;
        }
        return result;
    }
};