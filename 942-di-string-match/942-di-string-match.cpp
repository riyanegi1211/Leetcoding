class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int>ans;
        int min=0,max=n;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='I')
            {
                ans.push_back(min);
                min++;
            }
            else
            {
                ans.push_back(max);
                max--;
            }
        }
        return ans;
    }
};