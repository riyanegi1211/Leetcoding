class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m= s.length();
        int n=t.length();
        if(m!=n) return false;
        int scount[256]={0};
        int tcount[256]={0};
        
        for(int i=0;i<n;i++)
        {
            if(!scount[s[i]] and !tcount[t[i]])
            {
                scount[s[i]]=t[i];
                tcount[t[i]]=s[i];
            }
            else if(scount[s[i]]!= t[i])
                return false;
        }
        return true;        
    }
};