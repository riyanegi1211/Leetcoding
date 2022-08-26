class Solution {
public:
        
    void dfs(int city, unordered_map<int, bool> &visited, vector<vector<int>>& isConnected){
        
        visited[city] = true;
        
        for(int con=0; con<isConnected[city].size(); con++)
            if(!visited[con] && isConnected[city][con])
                dfs(con, visited, isConnected);                                                                                                   
    }
            
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        unordered_map<int, bool> visited;
                        
        int count = 0;
        for(int i=0; i<isConnected.size(); i++){
            if(!visited[i]){
                dfs(i, visited, isConnected);        
                count++;
            }             
        }
                           
        return count;
    }
};