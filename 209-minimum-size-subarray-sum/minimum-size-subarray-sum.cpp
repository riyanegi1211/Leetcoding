class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, currentSum=0;
        int res = INT_MAX;
        int n = nums.size();

        for(right=0;right< n;right++){
            currentSum+=nums[right];

            while(currentSum>=target){
                res = min(res,right-left+1);
                currentSum-=nums[left];
                left++;
            }
        }
        return res == INT_MAX?0:res;
    }
};