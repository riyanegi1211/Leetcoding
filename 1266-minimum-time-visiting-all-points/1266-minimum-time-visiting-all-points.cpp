class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        for(int i=0;i<n-1;i++)
        {
            int dx=points[i+1][0]-points[i][0];
            int dy=points[i+1][1]-points[i][1];
            
            ans+=max(abs(dx),abs(dy));
        }
        return ans;
    }
};