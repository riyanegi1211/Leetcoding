class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer= 0;
        for(int i =0;pointer<s.length() && i<t.length();i++){
            if(s[pointer]==t[i])
                pointer++;
        }
        return (pointer==s.length());
    }
};