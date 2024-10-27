vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    
    vector<int> adj[n];
    for(int i=0;i<m;i++)
    {
        
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
         
        
        
        
    }
    
    vector<vector<int>> ans(n);
    
    for(int i=0;i<n;i++)
    {
        ans[i].push_back(i);
        
        for(int j=0;j<adj[i].size();j++)
        {
            ans[i].push_back(adj[i][j]);
            
        }
    }
    
    return ans;
    
    
    
     
    
    
    
}

