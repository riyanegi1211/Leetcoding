class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int result=columnTitle[0]-64;
        if(n==1)
           return result;
        
        for(int i=1;i<n;i++)
        {
            result=result*26+(columnTitle[i]-64);
        }
        return result;
    }
};