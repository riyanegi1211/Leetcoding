class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int>mp;

        for(int i =0;i<n;i++){
            if(nums[i]>k)
                mp.insert(nums[i]);
            else if(nums[i]<k){
                return -1;
            }
        }
        return mp.size();
    }
};