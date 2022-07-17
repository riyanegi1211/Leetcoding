class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k=0;
        for(int i=1;i<=n;i++){
            if(k<target.size() and target[k]==i){
                ans.push_back("Push");
                k++;
            }
            else if(k<target.size()){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};