
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int mx = 0;
        unordered_set<int> m;
        
        for(auto i : nums)
            m.emplace(i);
        
        for(auto i : nums){
            
            if(!m.count(i - 1)){
                int curr = i;
                int cnt = 1;
                while(m.count(curr + 1)){
                    curr+=1;
                    cnt++;
                }
                
                mx = max(cnt, mx);
            }
        }
        
        return mx;
        
    }
};