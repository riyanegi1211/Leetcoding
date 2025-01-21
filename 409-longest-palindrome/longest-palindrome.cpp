class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        if (n==1){
            return 1;
        }

        int res = 0;
        unordered_map<char,int>freq;

        for(auto it:s){
            freq[it]++;
        }
        bool isOddPresent = false;
        for(auto it:freq){
            if(it.second%2==0)
                res+=it.second;
            else{
                res+=it.second-1;
                isOddPresent=true;
            }
        }
        if(isOddPresent)
            res+=1;
        return res;
    }
};