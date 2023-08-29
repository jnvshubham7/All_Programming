//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/#
#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:



	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> bfs; 
	    vector<int> vis(V, 0); 
	    queue<int> q; 
	    q.push(0); 
	    vis[0] = 1; 
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop(); 
	        bfs.push_back(node); 
	        
	        for(auto it : adj[node]) {
	            if(!vis[it]) {
	                q.push(it); 
	                vis[it] = 1; 
	            }
	        }
	    }
	    
	    return bfs; 
	}








//  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
//         vector<int> ans;
        
//         vector<int> vis(V+1,0);
        
//         for(int i=0;i<V;i++)
//         {
//             if(!vis[i])
//             {
//                 queue<int> q;
//                 q.push(i);
//                 vis[i]=1;
                
//                 while(!q.empty())
//                 {
//                     int node=q.front();
//                     q.pop();
                    
//                     ans.push_back(node);
                    
//                    for(auto it:adj[node])
//                    {
//                        if(!vis[it])
//                        {
//                            q.push(it);
//                            vis[it]=1;
//                        }
//                    }
//                 }
//             }
//         }
        
//         return ans;
//     }


};








// { Driver Code Starts.
int main(){
	int t=1;
//	cin >> t;
	// for multiple graphs
	while(t--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u); // uncomment this for undirected graoh 
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
