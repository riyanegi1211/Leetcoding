class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>sortedHeights=heights;
        sort(sortedHeights.begin(),sortedHeights.end());
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            if(sortedHeights[i]!=heights[i])
            {
                count++;
            }
        }
        return count;
    }
};