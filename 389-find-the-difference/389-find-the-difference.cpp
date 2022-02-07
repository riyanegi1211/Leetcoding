class Solution {
public:
    char findTheDifference(string s, string t) {
       int n1=s.size();
        int n2=t.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n1;i++)
        {
                sum1+=s[i];
        }
        for(int i=0;i<n2;i++)
        {
                sum2+=t[i];
        }
        return (sum2-sum1);
    }
};