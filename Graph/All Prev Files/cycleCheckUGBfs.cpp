//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {

public:
     bool BFS(vector<int> adj[], vector<bool> &visited, int src) {
        
        queue<pair<int, int> > q;
        
        q.push({src, -1});
        visited[src] = true;
        
        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(int &u : adj[node]) {
                if(visited[u] == false) {
                    visited[u] = true;
                    q.push({u, node});
                }
                else if(u != parent) {
                    return true;
                }
            }
        }
        
        return false;
    }
   
    bool isCycle(int V, vector<int> adj[]) {
         vector<bool> visited(V, false);
        
        for(int i = 0; i < V; ++i) {
            if(visited[i] == false) {
                if(BFS(adj, visited, i)) {
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc=1;
	//cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		// for(int i=0;i<V;i++)
		// {
		// 	cout<<i<<" "<<adj[i]<<" ";
		// }
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
