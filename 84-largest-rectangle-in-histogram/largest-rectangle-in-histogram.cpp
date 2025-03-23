class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> width(n);
        int maxArea = 0;

        stack<pair<int, int>> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if (st.empty())
                left[i] = -1;
            else
                left[i] = st.top().second;
            st.push({heights[i], i});
        }

        while (!st.empty()) {
            st.pop();
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if (st.empty())
                right[i] = n; 
            else
                right[i] = st.top().second;
            st.push({heights[i], i});
        }

        for (int i = 0; i < n; i++) {
            width[i] = (right[i] - left[i]) - 1;
            maxArea = max(maxArea, width[i] * heights[i]);
        }
        return maxArea;
    }
};
