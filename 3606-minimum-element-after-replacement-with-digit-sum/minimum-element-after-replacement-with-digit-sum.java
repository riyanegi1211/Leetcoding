class Solution {
    private int sumOfDigit(int num){
        int sum = 0;

        while(num>0){
            sum+= num%10;
            num/=10;
        }
    return sum;
    }
    public int minElement(int[] nums) {
        int n = nums.length;
        int ans = 37;
        
        for(int i=0;i<n;i++){
            int sum = sumOfDigit(nums[i]);
            ans = Math.min(ans,sum);
        }
        return ans;
    }
}