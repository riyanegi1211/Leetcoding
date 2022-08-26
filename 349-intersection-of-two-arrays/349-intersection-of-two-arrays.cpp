class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     unordered_set<int> ans;
        for(auto it1:nums1)
        {
            for(auto it2:nums2)
            {
                if(it1==it2)
                    ans.insert(it1);
            }
        }
        nums1.clear();
        for(auto it:ans)
        {
            nums1.push_back(it);
        }
        return nums1;
    }
};
