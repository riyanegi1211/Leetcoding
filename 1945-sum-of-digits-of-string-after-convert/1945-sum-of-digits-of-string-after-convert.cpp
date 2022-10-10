class Solution {
public:
    int getLucky(string s, int k) {
        string temp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            temp+=to_string(s[i]-'a'+1);
        }
        int sum=0;
        while(k--)
        {
            sum=0;
            for(int i=0;i<temp.size();i++)
            {
                sum+=temp[i]-'0';
            }
            temp=to_string(sum);
        }
        return sum;
    }
};