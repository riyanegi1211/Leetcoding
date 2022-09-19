class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int count=0,idx=0, n=nums.size();
        for(int i=0; i<n;i++){
            if(nums[i]){
                nums[idx]=nums[i];
                idx++;
            }
            else count++;
        }
        while(count--)
            nums[--n]=0;
    }
};