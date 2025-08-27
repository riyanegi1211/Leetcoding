class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        int maxDiagonal = 0;
        int n = dimensions.size();
        for(const auto& dimension:dimensions){
            int l = dimension[0], b = dimension[1];
            int area = l*b;
            int diagonal = l*l + b*b;
            if(diagonal>maxDiagonal){
                maxDiagonal = diagonal;
                maxArea = area;
            }
            else if(diagonal==maxDiagonal){
                maxArea = max(maxArea,area);
            }
        }
        return maxArea;
    }
};