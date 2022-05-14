class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>MorseCode{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>encoded;
     for(int i=0;i<words.size();i++)
     {
         string temp="";
         for(int j=0;j<words[i].length();j++)
         {
             temp+=(MorseCode[words[i][j]-97]);
         }
         encoded.insert(temp);
     }
        return encoded.size();        
    }
};