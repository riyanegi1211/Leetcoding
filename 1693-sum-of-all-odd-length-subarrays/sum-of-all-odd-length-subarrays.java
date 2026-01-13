class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum = 0;
        int n = arr.length;
        for(int i=0;i<n;i++){
            int curSum = 0;
            for(int j=i;j<n;j++){
                curSum+=arr[j];
                if((j-i+1)%2==1)
                    sum+=curSum;
            }
        }
        return sum;
    }
}