class Solution {
public:
    int longestValidParentheses(string s) {
        int maxString = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            int validCounter = 0; // count open and closing brackets to check for valid string
            int j = i;
            int stringCounter = 0; // count length of valid string
            while(validCounter >= 0 && j < s.length())
            {
                if(s.at(j) == '(')
                {
                    ++validCounter;
                }
                else
                {
                    --validCounter;
                }
                ++j;
                ++stringCounter;
                if(validCounter == 0)
                {
                    if(stringCounter > maxString)
                    {
                        maxString = stringCounter;
                    }
                }
            }
        }
        return maxString;
    }
};