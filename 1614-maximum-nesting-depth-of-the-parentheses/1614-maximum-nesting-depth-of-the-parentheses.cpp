class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        int result=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                count++;
                result=max(count,result);
            }
            else if(s[i]==')')
            {
                st.pop();
                count--;
            }
        }
        return result;
    }
};
