class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            for(auto i:m)
            {
                if(i.second==2)
                    return i.first;
            }
        }
        return ' ';
    }
};