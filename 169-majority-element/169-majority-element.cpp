class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int index=-1,i,count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                index=nums[i];
                count=1;
            }
            else
            {
                if(nums[i]==index)
                    count++;
                else
                    count--;
            }
        }
        int maxcount=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==index)
                maxcount++;
        }
        if(maxcount>n/2)
            return index;
        return -1;
    }
};