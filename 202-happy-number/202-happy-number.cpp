class Solution {
    int check(int n)
    {
        int temp=0;
        while(n)
        {
            int rem=n%10;
            n/=10;
            temp+=rem*rem;
        }
        return temp;
    }
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4)
            n=check(n);
        
        return n==1;
    }
};