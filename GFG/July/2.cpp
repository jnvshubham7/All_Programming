

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
	

void dfs(vector<int>adj[], int source, int destination, int &count, vector<bool>&vis){
        if(source == destination){
            count++;
            return;
        }
        
        vis[source] = true;
        for(auto neighbour : adj[source]){
            if(!vis[neighbour]) 
                dfs(adj, neighbour, destination, count, vis);
        }
        //backtrack
        vis[source] = false;
        
        
    }

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    //Creating adjacency list
	   vector<int> adj[n];
	    vector<bool>vis(n, false);
	    int count = 0;

	    for(int i = 0 ; i < edges.size() ; i++){
	        int x = edges[i][0];
	        int y = edges[i][1];
	        
	        adj[x].push_back(y);
	        
	    }
	    dfs(adj, s, d, count, vis);
	    
	    return count;
	}





int main(){
//Solution s;

ll t=1;
//cin>>t;
while(t--){

	// Input: edges = {{0,1},{0,3},{1,2},{3,2}}, 
// n = 4, s = 0, d = 2

   vector<vector<int>>edges = {{0,1},{0,3},{1,2},{3,2}};
  int n = 4;
  int s = 0;
  int d = 2;
  cout<<possible_paths(edges, n, s, d)<<endl;



}

	return 0;
}