class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5)
            return false;

        int five = 0;
        int ten = 0;
        for(int i:bills){
            if(i==5)
                five++;
            else if(i==10){
                if(five>0)
                    five--;
                else 
                    return false;
                ten++;
            }
            else{
                if(five>0 && ten>0){
                    five--;
                    ten--;
                }
                else if(five>2) five-=3;
                else return false;
            }
        }
        return true;
    }
};