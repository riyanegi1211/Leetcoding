class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod1=nums[0],prod2=nums[0],res=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int temp=max({nums[i],prod1*nums[i],prod2*nums[i]});
            prod2=min({nums[i],prod1*nums[i],prod2*nums[i]});
            prod1=temp;
            
            res=max(prod1,res);
        }
        return res;
    }
};