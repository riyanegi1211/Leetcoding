class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mod = 1e9 + 7;
        int n = nums.size();
        int left = 0, right = n-1;
        int count = 0;

        vector<int> subset(n);
        subset[0]=1;
        for(int i =1;i<n;i++){
            subset[i]=(subset[i-1]*2)%mod;
        }
        while(left<=right){
            if(nums[left]+nums[right]>target){
                right--;
            }
            else{
                count = (count+subset[right-left])%mod;
                left++;
            }
        }
        return count;
    }
};