class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1,0);
        if(n<=1)
            return n;
        nums[0]=0;
        nums[1]=1;
        int result=0;
        for(int i=2;i<=n;i++)
        {
            if(i%2)
                nums[i]=nums[i/2]+nums[(i/2)+1];
            else
                nums[i]=nums[i/2];
            result=max(result,nums[i]);
        }
        return result;
    }
};

