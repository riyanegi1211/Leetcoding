class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]<0)
                neg++;
            else if(nums[i]>0)
                pos++;
        }
        return max(pos,neg);
    }
};