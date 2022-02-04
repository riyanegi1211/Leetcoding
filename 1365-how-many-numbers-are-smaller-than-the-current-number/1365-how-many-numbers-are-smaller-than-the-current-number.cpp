class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>result;
        int i,j,count=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(j!=i && nums[j]<nums[i])
                {
                    count++;
                }
            }
            result.push_back(count);
            count=0;
        }
        return result;
    }
};