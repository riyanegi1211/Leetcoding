class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(r>=l)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
    }
};