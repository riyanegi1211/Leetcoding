class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> map;
        int result=0;
        int subarray=0;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            result+=nums[i]==0?-1:1;
            if(result==0)
            {
                if (subarray<i+1)
                    subarray=i+1;
            }
            else if(map.find(result)!=map.end())
            {
                if (subarray<i-map[result])
                    subarray=i-map[result];
            }
            else
                map[result]=i;
        }
        return subarray;
    }
};