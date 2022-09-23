class Solution {
public:
    int smallestEvenMultiple(int n) {
        int mul=n*2;
        for(int i=2;i<mul;i++)
        {
            if(i%2==0 && i%n==0)
                return i;
        }
        return mul;
    }
};