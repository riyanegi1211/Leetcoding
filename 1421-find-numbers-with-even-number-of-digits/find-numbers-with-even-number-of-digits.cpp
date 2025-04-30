class Solution {
public:
    int countDigits(int num){
        int count=0;
        while(num){
            num/=10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int digits = countDigits(nums[i]);
            if(digits%2==0)
                ans++;
        }
        return ans;
    }
};