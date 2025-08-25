class Solution {
private:
    void whenUp(vector<vector<int>>& mat,int &i,int &j, vector<int> &ans, int m, int n, bool &up){
        ans.push_back(mat[i][j]);
        while(i-1>=0 && j+1>=0 && i-1<m && j+1<n){
            i=i-1;
        j=j+1;
        ans.push_back(mat[i][j]);
       }
       if( j+1<n){
          j=j+1;
       }
       else{
        i=i+1;
       }
       up=false;
    }
    void whenDown(vector<vector<int>>& mat, int &i, int &j, vector<int> &ans , int m, int n, bool &up){
       ans.push_back(mat[i][j]);
       while(i+1>=0 && j-1>=0 && i+1<m && j-1<n){
        i=i+1;
        j=j-1;
        ans.push_back(mat[i][j]);
       }
       if( i+1<m){
          i=i+1;
       }
       else{
        j=j+1;
       }
       up=true;
    }
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        bool up = true;
        vector<int>ans;
        int i=0,j=0;
        
        while(ans.size()< rows*cols){
            if(up)
                whenUp(mat,i,j,ans,rows,cols,up);
            else if(!up)
                whenDown(mat,i,j,ans,rows,cols,up);
        }
        return ans;
    }
};