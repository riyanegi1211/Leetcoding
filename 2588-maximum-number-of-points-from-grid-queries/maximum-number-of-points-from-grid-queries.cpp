class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        visited[0][0] = true;
        queue<pair<int, int>> src;
        queue<pair<int, int>> dst;
        src.push({0, 0});
        
        int current = 0;
        unordered_map<int, int> limitToCount;
        
        set<int> sortedQueries;
        for (int query : queries) {
            sortedQueries.insert(query);
        }
        
        for (int limit : sortedQueries) {
            current += bfs(src, dst, limit, grid, visited, n, m);
            limitToCount[limit] = current;
            
            swap(src, dst);
            while (!dst.empty()) dst.pop();
        }
        
        vector<int> result(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            result[i] = limitToCount[queries[i]];
        }
        
        return result;
    }
    
private:
    int bfs(queue<pair<int, int>>& src, queue<pair<int, int>>& dst, int limit, 
            vector<vector<int>>& grid, vector<vector<bool>>& visited, int n, int m) {
        int visitedCount = 0;
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        while (!src.empty()) {
            auto [i, j] = src.front();
            src.pop();
            
            if (grid[i][j] < limit) {
                visitedCount++;
                
                for (auto& [di, dj] : directions) {
                    int nextI = i + di;
                    int nextJ = j + dj;
                    
                    if (nextI >= 0 && nextI < n && nextJ >= 0 && nextJ < m && !visited[nextI][nextJ]) {
                        visited[nextI][nextJ] = true;
                        src.push({nextI, nextJ});
                    }
                }
            } else {
                dst.push({i, j});
            }
        }
        
        return visitedCount;
    }
};