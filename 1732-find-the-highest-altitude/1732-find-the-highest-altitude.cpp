class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes{0};
        int n=gain.size();
        altitudes.push_back(gain[0]);
        for(int i=1;i<n;i++)
        {
            altitudes.push_back(altitudes[i]+gain[i]);
        }
       int ans= *max_element(altitudes.begin(),altitudes.end());
        return ans;
    }
};




