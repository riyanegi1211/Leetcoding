class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        int n = s.size();

        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                st.push("(");
            }
            else if(s[i]==')'){
                string temp="";
                while(!st.empty() && st.top()!="("){
                    temp = st.top() + temp;
                    st.pop();
                }
                if (!st.empty() && st.top() == "(") {
                st.pop(); 
                }
                reverse(temp.begin(), temp.end());
                st.push(temp);
            }
            else {
            if (!st.empty() && st.top() != "(") {
                st.top() += s[i];
            } else {
                st.push(string(1, s[i]));
            }
        }
    }

        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};