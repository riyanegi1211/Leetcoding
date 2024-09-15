class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool>isAllowed(26,false);
        int n = allowed.length();
        for(int i =0;i<n;i++){
            isAllowed[allowed[i]-'a']=true;
        }
        int ans=0;
        for(auto word:words){
            bool isConsistent=true;
            for(int i =0;i<word.length();i++)
            if(!isAllowed[word[i]-'a']){
                isConsistent=false;
                break;
            }
            if(isConsistent)
            ans++;
        }
        return ans;
    }
};