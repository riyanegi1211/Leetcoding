class Solution {
public:
    string defangIPaddr(string address) {
       string result;
        int n= address.size();
        for(int i=0;i<n;i++)
        {
            if(address[i]=='.')
                result+="[.]";
            else
                result+=address[i];
        }
        return result;
    }
};