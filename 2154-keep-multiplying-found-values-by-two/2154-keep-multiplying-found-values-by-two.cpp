class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==original)
            {
                result=original*2;
                original=result;
            }
            else
                result=original;
        }
        return result;
    }
};