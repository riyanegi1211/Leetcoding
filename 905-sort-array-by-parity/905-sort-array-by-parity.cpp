class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(nums[l]%2==0)
                l++;
            else if(nums[r]%2!=0)
                r--;
            else
            {
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
        }
        return nums;
    }
};