class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       vector<int> result;
        int n=encoded.size();
        result.push_back(first);
        for(int i=0;i<n;i++)
        {
            result.push_back(result[i]^encoded[i]);
        }
        return result;
    }
};