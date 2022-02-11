class Solution {
public:
    string interpret(string command) {
        string result;
        int n=command.size();
        
        for(int i=0;i<n;)
        {
            if(command[i]=='G')
            {
                result.push_back('G');
                i++;
            }
            else if(command[i]=='(' and command[i+1]==')')
            {
                result.push_back('o');
                i+=2;
            }
            else 
            {
                result+="al";
                i+=4;
            }
        }
         return result;   
    }
};