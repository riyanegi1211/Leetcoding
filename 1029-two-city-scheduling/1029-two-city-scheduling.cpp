class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> difference;
        int mincost=0;
        int n=costs.size();
        
        for(int i=0;i<n;i++)
        {
            mincost+=costs[i][0];
            difference.push_back(costs[i][1]-costs[i][0]);
        }
        sort(difference.begin(),difference.end());
        for(int i=0;i<n/2;i++)
        {
            mincost+=difference[i];
        }
        return mincost;
    }
};