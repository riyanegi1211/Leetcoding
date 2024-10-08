class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int asteroid:asteroids){
            bool destroyed = false;
            while (!st.empty() && asteroid < 0 && st.top() > 0) {
                if (st.top() < -asteroid) {
                    st.pop(); 
                } else if (st.top() == -asteroid) {
                    st.pop();
                    destroyed = true; 
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                st.push(asteroid); 
            }
        }
        int n = st.size();
        vector<int> result(n);
        for(int i=n-1;i>=0;i--){
            result[i]=st.top();
            st.pop();
        }
        return result;
    }
};