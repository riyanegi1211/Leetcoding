class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string>mp;
        int n=names.size();
        vector<string>v;
        for(int i=0; i < n; i++)
            mp[heights[i]] = names[i];
        for (auto i = mp.rbegin(); i != mp.rend(); ++i) 
            v.push_back(i->second);
        return v;
    }
};