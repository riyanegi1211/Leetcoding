class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 1;
        
        int n = nums.size();
        
        while(i < n && j < n) {
            if(nums[i]%2 != 0 && nums[j]%2 == 0) 
            {
                swap(nums[i],nums[j]);
                i+=2;
                j+=2;
            } 
            else if(nums[i]%2 == 0 && nums[j]%2 != 0)
            {
                j+=2;
                i+=2;
            } 
            else if(nums[i]%2 == 0)
            {
                i+=2;
            } 
            else 
            {
                j+=2;
            }
        }
        
        return nums;
        
    }
};