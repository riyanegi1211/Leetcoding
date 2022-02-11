class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int n1=stones.size();
        int n2=jewels.size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(jewels[j]==stones[i])
                    count++;
            }
        }
        return count;
    }
};