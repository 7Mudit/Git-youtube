class Solution {
public:
    void dfs(vector<int> adj[],string &labels,int curr,int parent,vector<int>& freq
    ,vector<int>& ans)
    {
        int initial = freq[labels[curr] - 'a'];
        freq[labels[curr]-'a']++;

        for(auto edge : adj[curr]){
            if(edge == parent)
                continue;
            dfs(adj , labels, edge , curr ,freq , ans);
        }
        ans[curr] = freq[labels[curr] - 'a'] - initial;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> ans(n , 0);
        vector<int> freq(26,0);
        vector<int> adj[n];

        for(int i = 0; i < edges.size() ; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        dfs(adj,labels,0,-1,freq,ans);

        return ans;
    }
};