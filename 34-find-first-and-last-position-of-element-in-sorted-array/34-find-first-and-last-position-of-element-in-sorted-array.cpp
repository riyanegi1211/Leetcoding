class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m, l = 0, r = nums.size()-1;
        while(l <= r){
            m = l + (r-l)/2;    
            if(nums[m] == target) {
                int i = m, j = m;
                while(i <= r && nums[i] == target) i++;
                while(j >= l && nums[j] == target) j--;
                return {j+1, i-1};
            }
            else if(target > nums[m]) l = m+1;
            else r = m-1;
        }
        return { -1, -1 };
    }
};