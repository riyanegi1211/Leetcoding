class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        int count[26]={0};
        int vis[26]={0};
        for(int i=0;i<n;i++)
            count[s[i]-'a']++;
        string res="";
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']--;
            if(!vis[s[i]-'a'])
            {
                while(n>0 && res.back()>s[i] && count[res.back()-'a']>0)
                {
                    vis[res.back()-'a']=0;
                    res.pop_back();
                }
                res+=s[i];
                vis[s[i]-'a']=1;
            }
        }
        return res;
    }
};