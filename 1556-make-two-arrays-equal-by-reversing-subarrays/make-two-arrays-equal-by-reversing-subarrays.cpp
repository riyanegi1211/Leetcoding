class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        bool ans = true;
        int n = target.size();
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        for(int i =0;i<n;i++){
            if(arr[i]!=target[i])
                ans= false;
        }
        return ans;
    }
};