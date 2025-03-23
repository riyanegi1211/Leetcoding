class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n); 
        const int MOD = 1e9 + 7;
        int start , end , travel ;
        for (auto& road : roads)          
        {
            start = road[0], end = road[1], travel = road[2];
            adj[start].push_back({end, -travel});    // make the list
            adj[end].push_back({start, -travel});
        }
        priority_queue<pair<long long, int>> hp;     
         vector<long long> shortestTime(n, LLONG_MIN);
         vector<int> pathCount(n, 0);
        shortestTime[0] = 0; 
         pathCount[0] = 1; 
         hp.emplace(0, 0); 
         long long currTime;
         int currNode;
          while (!hp.empty()) {
            currTime = hp.top().first;  
            currNode = hp.top().second;
            hp.pop();
            if (currTime < shortestTime[currNode]) continue;
            for (auto& [neighborNode, roadTime] : adj[currNode]) {
                   if (currTime + roadTime > shortestTime[neighborNode]) {
                    shortestTime[neighborNode] = currTime + roadTime;
                    pathCount[neighborNode] = pathCount[currNode];
                    hp.emplace(shortestTime[neighborNode], neighborNode);
                }
                
                else if (currTime + roadTime == shortestTime[neighborNode]) 
                    pathCount[neighborNode] = (pathCount[neighborNode] + pathCount[currNode]) % MOD;
                            }
        }

        return pathCount[n - 1];
        
    }
};