class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        vector<int>pos;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
                pos.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            int dist=INT_MAX;
            for(int j=0;j<pos.size();j++)
            {
                dist=min(dist,abs(i-pos[j]));
            }
            ans.push_back(dist);
        }
        return ans;
    }
};

        