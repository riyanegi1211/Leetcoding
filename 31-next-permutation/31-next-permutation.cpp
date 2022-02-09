class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        bool val=next_permutation(nums.begin(),nums.end());
        if(val==false)
        {
            sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++)
            {
                cout<<nums[i]<<" ";
            }
        }
        else
            for(int i=0;i<n;i++)
            {
                cout<<nums[i]<<" ";
            }
    }
};