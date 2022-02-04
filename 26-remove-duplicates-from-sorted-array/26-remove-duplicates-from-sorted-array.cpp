class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ::iterator it;
        it=std::unique(nums.begin(),nums.end());
        nums.resize(std::distance(nums.begin(),it));
        int count=nums.size();
        return count;
    }
};