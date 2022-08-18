class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>maxh;
        int n=nums.size();
        int result=1;
        for(int i=0;i<n;i++)
        {
            maxh.push(nums[i]);
        }
        for(int i=0;i<2;i++)
        {
            int a= maxh.top()-1;
            result*=a;
            maxh.pop();
        }
        return result;
    }
};