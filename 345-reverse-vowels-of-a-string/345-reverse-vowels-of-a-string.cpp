class Solution {
public:
    int check(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return 1;
        return 0;
    }
     string reverseVowels(string s) {
         int n=s.length();
         for(int i=0,j=n-1;i<j;)
         {
             if(check(s[i])&&check(s[j]))
             {
                 swap(s[i],s[j]);
                 i++;
                 j--;
             }
             if(!check(s[i]))
                 i++;
             if(!check(s[j]))
                 j--;
         }
         return s;
     }        
       
};
