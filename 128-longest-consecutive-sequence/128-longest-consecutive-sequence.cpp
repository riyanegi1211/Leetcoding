
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> Set;
        int streak=0;
        
        for(int num:nums)
        {
            Set.insert(num);
        }
        
        for(int num:nums)
        {
            if(!Set.count(num-1))
            {
                int curStreak=1;
                int curNum=num;
                
                while(Set.count(curNum+1))
                {
                    curNum+=1;
                    curStreak+=1;
                }
                streak=max(streak,curStreak);
            }
        }
        return streak;
    }
};

