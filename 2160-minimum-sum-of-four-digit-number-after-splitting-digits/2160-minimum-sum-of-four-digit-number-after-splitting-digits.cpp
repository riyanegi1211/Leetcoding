class Solution {
public:
    int minimumSum(int num) {
        int rem;
        vector<int> ans;
       while(num)
       {
           rem=num%10;
           num/=10;
           ans.push_back(rem);
       }
        sort(ans.begin(),ans.end());
        int sum=(ans[0]*10+ans[3]) + (ans[1]*10+ans[2]);
        return sum;
    }
};
