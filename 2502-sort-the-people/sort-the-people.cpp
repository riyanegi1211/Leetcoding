class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unordered_map<int,string>mp;
        for(int i =0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        vector<string>sortedHeight(n);
        for(int i=n-1;i>=0;i--){
            sortedHeight[n-i-1]=mp[heights[i]];
        }
        return sortedHeight;
    }
};