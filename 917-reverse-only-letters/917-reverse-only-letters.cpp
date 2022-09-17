class Solution {
    bool check(char t)
    {
        if((t<=90 && t>=65) || (t<=122 && t>=97))
            return true;
        return false;
    }
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int start=0,end=n-1;
        while(start<end)
        {
            if(check(s[start]) && check(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(check(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return s;
    }
};
