class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int num = nums[i];
            int more = target-nums[i];
            if(mp.find(more)!=mp.end()){
                return {mp[more],i};
            }
            else{
                mp[num]=i;
            }
        }
        return {-1,-1};
    }
};