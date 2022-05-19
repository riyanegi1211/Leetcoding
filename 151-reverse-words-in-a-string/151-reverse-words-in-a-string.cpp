class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n=s.length();
        string word="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ' && word.size()>0)
            {
                st.push(word);
                word="";
                continue;
            }
            if(s[i]!=' ')
            {
                word.push_back(s[i]);
            }
        }
        if(word.size()>0)
        {
            st.push(word);
        }
        
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            if(st.size()!=1)
            {
                ans+=" ";    
            }
            st.pop();
        }
        return ans;
    }
};
