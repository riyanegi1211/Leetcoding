class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles>=numExchange)
        {
            int q = numBottles/numExchange;
            ans += q;
            int rem = numBottles%numExchange;
            numBottles=q+rem;
        }
        return ans;
    }
};