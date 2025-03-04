class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        list<int>q;
        int n = nums.size();
        int i = 0, j = 0;

        while (j < n) {
            while (!q.empty() && nums[q.back()] < nums[j]) {
                q.pop_back();
            }
            q.push_back(j);

            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {  
                ans.push_back(nums[q.front()]);  

                if (!q.empty() && q.front() == i) {
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};