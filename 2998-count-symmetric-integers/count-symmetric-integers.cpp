class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans  = 0;
        for(int i=low;i<=high;i++){
            string nums = to_string(i);
            int len = nums.size();
            if(len%2 == 0){
                int sum1 = 0;
                int sum2 = 0;
                for(int j = 0; j < len / 2; j++){
                    sum1 += nums[j] - '0';
                }
                for(int j = len / 2; j < len; j++){
                        sum2 += nums[j] - '0';
                }
            if(sum1 == sum2)
                ans++;
            }
        }
        return ans;
    }
};