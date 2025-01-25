class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(right>=left){
            int mid = left+(right-left)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                right = mid-1;
            else
                left =mid+1;
        }
        return -1;
    }
};