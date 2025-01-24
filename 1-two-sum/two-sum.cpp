class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        int n = nums.size();
        vector<int>ans;

        for(int i =0;i<n;i++){
            int num = nums[i];
            int more = target-num;
            if(map.find(more)!=map.end()){
                return {map[more],i};
            }
            else
                map[num]=i;
        }
        return {-1,-1};
    }
};