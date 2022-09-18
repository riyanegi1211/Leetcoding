class Solution {
public:
    string generateTheString(int n) {
        string res;
        for(int i = 0; i < n; i++)
            res += 'a';
         if((n & 1) == 0)
            res[n - 1] = 'b';
    return res;
      
    }
};