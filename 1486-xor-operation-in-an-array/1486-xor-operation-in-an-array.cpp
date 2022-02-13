class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        int result=0;
        for(int i=0;i<n;i++)
        {
            v.push_back(start+2*i);
            result^=v[i];
        }
        return result;
    }
};