class Solution {
public:
    int reverseNum(int num)
    {
        int temp=num;
        int rem,rev=0;
        while(temp)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;            
        }
        return rev;
    }
public:
    bool isSameAfterReversals(int num) {
        int rev1=reverseNum(num);
        int rev2=reverseNum(rev1);
        
        return rev2==num;
    }
};

