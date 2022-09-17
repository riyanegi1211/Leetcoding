class Solution {
    public:
    bool check(string s)
    {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(check(words[i]))
            {
                temp=words[i];
                break;
            }
        }
        return temp;
    }
};