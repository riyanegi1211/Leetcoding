class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result=0;
        int n=items.size();
        for(int i=0;i<n;i++)
        {
           if(ruleKey == "type" && items[i][0]==ruleValue)
                {result++;}
            else if(ruleKey == "color" && items[i][1]==ruleValue)
                 {result++;}
             else if(ruleKey == "name" && items[i][2]==ruleValue)
                  {result++;}
        }
        return result;
    }
};