class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        vector<int>temp;
        int n=changed.size();
        if(n%2!=0)
            return ans;
        
        sort(changed.begin(),changed.end());
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(q.front()==changed[i] && !q.empty())
            {
                q.pop();
            }
            else
            {
                q.push(changed[i]*2);
                ans.push_back(changed[i]);
            }
        }
        if(q.empty())
            return ans;
        else
            return temp;
    }
};