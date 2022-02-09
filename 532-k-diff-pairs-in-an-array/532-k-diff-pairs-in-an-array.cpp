class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<pair<int,int>, int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(nums[i]-nums[j])==k && m.find({nums[j],nums[i]})==m.end())
                    m[{nums[i],nums[j]}]++;
            }
        }
        return m.size();
    }
};
