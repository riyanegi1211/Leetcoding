class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int, int>> xVals, yVals;

        for(auto& x : rectangles) {
            xVals.push_back({x[0], x[2]});
            yVals.push_back({x[1], x[3]});
        }
        sort(xVals.begin(), xVals.end());
        sort(yVals.begin(), yVals.end());

        int partitionCntX = 0;
        int partitionCntY = 0;
        int maxX = xVals[0].second, maxY = yVals[0].second;
        for(int i=1; i<xVals.size(); i++) {
            if(xVals[i].first >= maxX) {
                partitionCntX++;
                if(partitionCntX == 2) return true;
                maxX = xVals[i].second;
            }
            else maxX = max(maxX, xVals[i].second);

            if(yVals[i].first >= maxY) {
                partitionCntY++;
                if(partitionCntY == 2) return true;
                maxY = yVals[i].second;
            }
            else maxY = max(maxY, yVals[i].second);
        }

        return partitionCntX >= 2 || partitionCntY >= 2;
    }
};