class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int maxCandies = 0;
        int n = candies.size();
        for(int i=0;i<n;i++){
            maxCandies=max(maxCandies,candies[i]);
        }

        int left=0;
        int right=maxCandies;

        while(left<right){
            int middle = (left+right+1)/2;
            if(canAllocateCandies(candies,k,middle))
                left=middle;
            else
                right=middle-1;
        }
        return left;
    }
private:
    bool canAllocateCandies(vector<int>& candies, long long k,int numOfCandies) {
        long long int maxNumOfChildren = 0;

        for (int pileIndex = 0; pileIndex < candies.size(); pileIndex++) {
            maxNumOfChildren +=
                candies[pileIndex]/numOfCandies;  
        }

        return maxNumOfChildren >= k;
    }
};