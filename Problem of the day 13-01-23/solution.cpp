class Solution {
public:
    int maxPath=0;
    
    int dfs(int curr , int parent , vector<vector<int>> &adj , string& s){
        int maxPath1 = 0;
        int maxPath2 = 0;

        for(auto edge : adj[curr]){

            // recursively asking for length from subtrees
            int pathLength = dfs(edge , curr , adj ,s);

            // if same characters length will be 0
            if(s[edge] == s[curr]){
                pathLength=0;
            }
            // if not same then increase length by 1
            else
                pathLength+=1;

            // if multiple paths exist then if path length is greater than our maximum path then update both paths
            if(pathLength >= maxPath1){
                maxPath2 = maxPath1;
                maxPath1 = pathLength;

            }
            //  if path length is greater than our second path then update that path only
            else if(pathLength >= maxPath2){
                maxPath2 = pathLength;
            }
        }
        // updating our ans by adding both of our maximum paths
        maxPath = max(maxPath , maxPath1 + maxPath2);

        // in the end of every subcall returning maxLength without same adjacent character that exist to parent of that node
        return maxPath1;
    }


    int longestPath(vector<int>& parent, string s) {
        int n=parent.size();
        vector<vector<int>> adj(n);
        // making our adjacency list
        for(int i = 1; i < n ; i++)
            adj[parent[i]].push_back(i);
        // 0 - 1 2
        // 1 - 3 4
        // 2 - 5

        // depth first search call
        dfs(0 , -1 , adj , s );

        // inclusive of that node from which we are getting our max path
        return maxPath + 1;
    }
};