class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>res;
        int n=asteroids.size();
        for(int i=0;i<n;i++)
        {
            if(res.empty() || asteroids[i]>0)
                res.push_back(asteroids[i]);
            else
            {
                while(!res.empty() && res.back()>0 && res.back()<abs(asteroids[i]))
                {
                    res.pop_back();
                }
                if(!res.empty() && res.back()+asteroids[i]==0)
                {
                    res.pop_back();
                }
                else if(res.empty() || res.back()<0)
                {
                    res.push_back(asteroids[i]);
                }                
            }
        }
        return res;
    }
};