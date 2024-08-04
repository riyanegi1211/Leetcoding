class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>sumArrays;

        for(int i =0,k=0;i<n;i++){
            int sum = 0;
            for(int j =i;j<n;j++){
                sum+=nums[j];
                sumArrays.push_back(sum);
            }
        }
        sort(sumArrays.begin(),sumArrays.end());

        long long rangeSum=0, mod=1e9+7;
        for(int i =left-1;i<=right-1;i++){
            rangeSum=(rangeSum+sumArrays[i])%mod;
        }
        return rangeSum;
    }
};