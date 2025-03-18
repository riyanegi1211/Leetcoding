class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int i=0, j=0;
        int maxLength = INT_MIN;

        while(j<n){
            while((ans & nums[j])!=0){
                ans ^= nums[i];
                i++;
            }
            ans |= nums[j];
            maxLength = max(maxLength, j-i+1);
            j++;
        }
        return maxLength;
    }
};