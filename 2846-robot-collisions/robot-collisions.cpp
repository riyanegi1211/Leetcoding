class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int>indices(n);
        vector<int>ans;
        stack<int>st;

        for(int i = 0;i<n;i++){
            indices[i] = i;
        }

        sort(indices.begin(),indices.end(),[&](int lhs, int rhs){return positions[lhs]<positions[rhs];});

        for(int curIndex:indices){
            if(directions[curIndex]=='R')
                st.push(curIndex);
            else{
                while(!st.empty() && healths[curIndex]){
                    int topIndex = st.top();
                    st.pop();
    
                    if(healths[topIndex]>healths[curIndex]){
                        healths[topIndex] -= 1;
                        healths[curIndex] = 0;
                        st.push(topIndex);
                    }
                    else if(healths[topIndex]<healths[curIndex]){
                        healths[curIndex] -= 1;
                        healths[topIndex] = 0;
                    }
                    else{
                        healths[topIndex] = 0;
                        healths[curIndex] = 0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(healths[i]>0)
                ans.push_back(healths[i]);
        }
        return ans;
    }
};