class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>freq;
        for(auto it:s){
            freq[it]++;
        }
        for(auto it:t){
            freq[it]--;
        }
        for(auto it:freq){
            if(it.second==-1)
                return it.first;
        }
        return ' ';
    }
};