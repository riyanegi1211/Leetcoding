class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>freq;
        int sum = 0;
        int maxi = INT_MIN;
        for(auto& it:nums){
            if(it>0 && freq[it]==0){
                freq[it]++;
                sum+=it;
            }
            maxi = max(maxi,it);
        }
        return(maxi<=0?maxi:sum);
    }
};