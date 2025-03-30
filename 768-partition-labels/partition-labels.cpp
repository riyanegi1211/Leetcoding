class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size(),p=-1;
        vector<int> last(26,-1);
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        vector<int> ans;
        int w=0;
        for(int i=0;i<n;i++){
            w=max(w,last[s[i]-'a']);
            if(w==i){
                ans.push_back(w-p);
                p=w;
            }
        }
        return ans;
    }
};