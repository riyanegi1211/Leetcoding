class Solution {
public:
    string generateTheString(int n) {
        string res;
        for(int i = 0; i < n; i++)
            res += 'r';
         if((n & 1) == 0)
            res[n - 1] = 'm';
    return res;
      
    }
};