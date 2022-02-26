class Solution {
public:
    bool isPalindrome(int x) {
        int i;
        string s = to_string(x);
        int n=s.length();
        for(i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
                break;
        }
        if(i==n/2)
        {
             return true;
        }
        return false;
    }
};