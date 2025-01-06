class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;  
            }
        }
        int sum = 0;
        unordered_map<int,int> mp;
        int res = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0)
                res = max(res,i+1);
            if(mp.find(sum)!=mp.end()){
                res = max(res,i-mp[sum]);
            }
            else
                mp[sum]=i;
        }
        return res;
    }
};