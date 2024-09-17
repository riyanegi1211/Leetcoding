class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> uncommon;
        string s3=s1 +' '+s2;
        unordered_map<string,int> frequency;
        string temp = "";
        
        for(int i=0;i<=s3.length();i++){
            if(s3[i] == ' ' || i==s3.length()){
                frequency[temp]++;
                temp = "";
            }
            else{
                temp += s3[i];
            }
        }
        
        for(auto it:frequency){
            if(it.second == 1){
                uncommon.push_back(it.first);
            }
        }
        return uncommon;
    }
};