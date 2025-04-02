class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for(int i=2;i<n;i++){
            int maxPrefix = nums[0];
            for(int j=1;j<i;j++){
                res=max(res,(long long)(maxPrefix-nums[j])*nums[i]);
                maxPrefix = max(maxPrefix,nums[j]);
            }
        }
        return res;
    }
};