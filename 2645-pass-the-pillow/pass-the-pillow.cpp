class Solution {
public:
    int passThePillow(int n, int time) {
        int person=0;
        int direction = time/(n-1);
        int rem = time%(n-1);
        if(direction%2!=0)
            person = n - rem;
        else
            person = rem + 1;
        
        return person;
    }
};