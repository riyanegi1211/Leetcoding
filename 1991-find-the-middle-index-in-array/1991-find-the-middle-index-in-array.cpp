class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>leftSum,rightSum;
        int Sum1 = 0;
        int Sum2 = 0;
        for(int i=0;i<nums.size();i++)
        {
             leftSum.push_back(Sum1);
             Sum1 += nums[i];     
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
             rightSum.push_back(Sum2);
             Sum2 += nums[i];     
        }
        for(int i=0;i<nums.size();i++)
        {
            int left = i;
            int right = nums.size()-1-i;
            if(leftSum[left]==rightSum[right])
                    return i;
        }
        return -1;
    }
};
