class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int count=0;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
                ans+=s[i];
            if(s[i]==' ')
            {
                count++;
                ans+=s[i];
            }
            if(count>=k)
                break;
        }
        int size=ans.length();
        if(ans[size-1]==' ')
        ans.pop_back();
        return ans;
    }
};
