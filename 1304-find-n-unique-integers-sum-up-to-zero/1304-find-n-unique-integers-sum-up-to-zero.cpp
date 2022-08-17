class Solution {
public:
    vector<int> sumZero(int n) {
        vector< int> ans;
        if( n%2)
        {
            
            ans.push_back(0);
            
            
            for( int i =0; i<n/2; i++)
            {
                int k= (-1)*(i+1);
                ans.push_back(i+1);
                ans.push_back(k);
            }
            
        }
        
        else 
        {
            
            for( int i =0; i<n/2; i++)
            {
                int k= (-1)*(i+1);
                ans.push_back(i+1);
                ans.push_back(k);
            }
            
            
        }
      
        return ans;
    }
};