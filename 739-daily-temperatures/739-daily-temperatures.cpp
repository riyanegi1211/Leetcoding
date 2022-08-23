class Solution {
public:
    vector<int>NGR(vector<int> &a)
    {
        vector<int>ans;
        int n=a.size();
        stack<pair<int,int>> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans.push_back(0);
            }
            else if(s.size()>0 and s.top().first>a[i])
            {
                ans.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first<=a[i])
            {
                while(s.size()>0 and s.top().first<=a[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(s.top().second);
                }
            }
            s.push({a[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ngr = NGR(temperatures);
        int n = temperatures.size();
        for(int i=0;i<n;i++)
        {
            if(ngr[i]!=0)
            {
                ngr[i]-=i;
            }
        }
        return ngr;
    }
};
