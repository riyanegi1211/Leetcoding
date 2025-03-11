class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt1=solve(s,3); 
        int cnt2=solve(s,2); 
        return cnt1-cnt2;
    }
    int solve(string& s, int k){
        int n=s.size();
        unordered_map<char,int>mp;
        int i=0; int j=0; int cnt=0;

        while(j<n){
            mp[s[j]]++;

            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            cnt+=(j-i+1);
            j++;
        }
        return cnt;
    }
};