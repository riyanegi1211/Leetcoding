class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int mul=1;
        int rem;
        while(n)
        {
            rem=n%10;
            n/=10;
            sum+=rem;
            mul*=rem;
        }
        return (mul-sum);
    }
};