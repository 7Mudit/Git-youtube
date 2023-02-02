class Solution {
public:
// time complexity: O(V +E)
// space complexity: O(V)
    int dfs(int prev, int curr,vector<vector<int>>& adj, vector<bool>& hasApple ){
        int time=0;

        for(auto edge : adj[curr] ){
            // it will stuck in infinity loop 
            if(prev != edge){
                // storing time taken for each node
                int subTime=dfs(curr, edge, adj , hasApple);
                if(subTime > 0 || hasApple[edge])
                    time+=subTime+2;
            }

        }
        //returning time to collect apples
        return time;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<vector<int>> adj(n);

        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // 0 - 1 2 
        // 1 - 0 4 5
        // 2 - 0 3 6
        // 3 - 2
        // 4 - 1 
        // 5 - 1 
        // 6 - 2 
        return dfs(-1 , 0 , adj ,hasApple);
    }
};