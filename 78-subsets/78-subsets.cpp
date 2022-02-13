class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        unsigned int power= pow(2,n);
        vector<vector<int>> result;
        vector<string> list;
        for(int i=0;i<power;i++)
        {
            vector<int> subset;
            string temp="";
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    subset.push_back(nums[j]);
                     temp += to_string(nums[j]) + '$';
                }
            }
            if (find(list.begin(), list.end(), temp) == list.end()) 
            {
                result.push_back(subset);
                list.push_back(temp);
            }
        }
        return result;
    }
};