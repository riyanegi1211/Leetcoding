class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>freq;
        int result = 0;
        bool hasMiddle = false;

        for(string &word:words){
            freq[word]++;
        }

        for(auto &word:freq){
            string rev = word.first;
            reverse(rev.begin(),rev.end());
            if(rev == word.first){
                result += (word.second / 2) * 4;  
                if (word.second % 2 == 1) 
                    hasMiddle = true;
            }
            else if (freq.find(rev) != freq.end()) { 
                int pairs = min(word.second, freq[rev]);
                result += pairs * 4;
                freq[rev] = 0;  
            }
        }
        if (hasMiddle) result += 2; 
        return result;
    }
};