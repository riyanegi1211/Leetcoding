class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=INT_MIN, i=0,j=0,n=s.size();
        if(n==0)
            return 0;
        unordered_map<char,int>mp;
        while(j<n)
        {
            mp[s[j]]++;
            while(i<n && mp[s[j]]!=1)
            {
                mp[s[i]]--;
                i++;
             }
              maxi=max(maxi,j-i+1);
              j++;
        }
        return maxi;
    }
};