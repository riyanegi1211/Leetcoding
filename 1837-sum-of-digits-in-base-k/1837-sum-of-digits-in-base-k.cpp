class Solution {
public:
    int sumBase(int n, int k) {
        int nn=0;
        while(n)
        {
            int temp=n%k;
            nn+=temp;
            n/=k;
        }
        return nn;
    }
};