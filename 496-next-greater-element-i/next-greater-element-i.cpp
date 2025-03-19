class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int>mp;
        int n =nums2.size();
        int m=nums1.size();
        vector<int>ans;

        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.size()==0)
                mp[nums2[i]]=-1;
            else if(st.size()>0 && st.top()>nums2[i]){
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }

        for(int i=0;i<m;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};