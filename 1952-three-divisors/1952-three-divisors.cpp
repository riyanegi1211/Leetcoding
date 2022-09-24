class Solution {
public:
    bool isThree(int n) {
        int counter = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n%i == 0 and n/i != i)
            {
                counter += 2;
            }
            if (n%i == 0 and n/i == i)
            {
                counter++;
            }
        }
        if (counter == 3)
        {
            return true;
        }
        return false;
    }
};