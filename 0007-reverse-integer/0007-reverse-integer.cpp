class Solution {
public:
    long reverse(long x) {
        bool negative=false;
        if(x<0)
        {
            negative=true;
            x*=-1;
        }
        long rev=0;
        while(x>0)
        {
            rev=(rev*10)+(x%10);
            x/=10;
        }
        if(rev> INT_MAX)
        {
            return 0;
        }
        return negative?(int)(-1*rev):(int)rev;
            
    }
};