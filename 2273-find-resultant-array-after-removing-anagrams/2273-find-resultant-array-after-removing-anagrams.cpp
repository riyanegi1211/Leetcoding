class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>temp=words;
        for(int i=0;i<n;i++)
        {
            sort(temp[i].begin(),temp[i].end());
        }
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<n;i++)
        {
            if(temp[i]==temp[i-1])
                continue;
            else
                ans.push_back(words[i]);
        }
        return ans;
    }
};
