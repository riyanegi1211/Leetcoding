class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int index = 0;
        findSubset(index,nums,subset,ans);
        return ans;
    }
    void findSubset(int index,vector<int>&nums,vector<int>&subset,vector<vector<int>>&ans){
        int n = nums.size();
        ans.push_back(subset);
        for(int i=index;i<n;i++){
            subset.push_back(nums[i]);
            findSubset(i+1,nums,subset,ans);
            subset.pop_back();
        }
    }
};