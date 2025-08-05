class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int ans = 0;
        for(auto fruit:fruits){
            int unchecked = 1;
            for(int i=0;i<n;i++){
                if(fruit<=baskets[i]){
                    baskets[i] = 0;
                    unchecked = 0;
                    break;
                }
            }
            ans += unchecked;
        }
        return ans;
    }
};