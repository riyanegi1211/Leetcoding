class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step=0;
        for(auto &log:logs)
        {
            if(log=="../")
            {
                step=max(0,step-1);
            }
            else if(log=="./")
            {
                continue;
            }
            else
            {
                step++;
            }
        }
        return step;
    }
};