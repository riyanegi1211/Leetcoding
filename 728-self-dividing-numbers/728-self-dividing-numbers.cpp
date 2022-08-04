class Solution {
public:
    bool checkDivide(int n)
    {
        int temp=n,rem;
        bool fail=false;
        while(n)
        {
            rem=n%10;
            if(rem==0 or temp%rem!=0 )
            {
                fail=true;
                break;
            }
            n=n/10;
        }
    
        if(fail)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++)
        {
            if(checkDivide(i))
                res.push_back(i);
        }
        return res;
    }
};

