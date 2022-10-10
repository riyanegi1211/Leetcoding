class Solution {
    bool isVowel(char s)
    {
        if(s=='a' || s=='e'|| s=='i' || s=='o' || s=='u'||
              s=='A' || s=='E' || s=='I' || s=='O' || s=='U')
            return true;
        else
            return false;
    }
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n/2;i++)
        {
            if(isVowel(s[i]))
                count++;
        }
        for(int i=n/2;i<n;i++)
        {
            if(isVowel(s[i]))
                count--;
        }
        if(count==0)
            return true;
        else
            return false;
    }
};