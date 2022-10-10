class Solution {
    bool digitSum(int n)
    {
        int rem=0;
        while(n)
        {
            rem+=n%10;
            n/=10;
        }
        if(rem%2==0)
            return true;
        else 
            return false;
    }
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++)
        {
            if(digitSum(i))
                count++;
        }
        return count;
    }
};