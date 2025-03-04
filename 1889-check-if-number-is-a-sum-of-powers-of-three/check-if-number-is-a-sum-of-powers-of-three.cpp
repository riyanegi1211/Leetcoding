class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n!=1){
            int remainder = n%3;
            n/=3;
            if(remainder == 2)
                return false;
        }    
        return true;
    }
};