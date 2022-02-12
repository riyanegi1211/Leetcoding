class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int left=0;
        int right=0;
        int n=s.size();
            for(int i=0;i<n;i++)
            {
                if(s[i]=='L')
                {
                    left++;
                }
                else
                {
                     right++;
                }
                if(left==right)
                {
                    count++;
                }
            }
        return count;
    }
};