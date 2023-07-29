/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

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
    




// @lc code=start
class Solution {
public:
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

      unordered_map<int,vector<int>> graph;
        fr(i,edges.size()){
            graph[edges[i][0]].pb(edges[i][1]);
            graph[edges[i][1]].pb(edges[i][0]);
        }

        vector<int> vis(n,0);
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==destination) return true;
           
           for(auto node:graph[curr]){
               if(!vis[node]){
                   vis[node]=1;
                   q.push(node);
               }
           }
        }
        return false;

    }
};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;
    vector<vector<int>> edges(n, vector<int>(2, 0));
    for(int i=0;i<n;i++){
        cin>>edges[i][0]>>edges[i][1];
    }
    int source,destination;
    cin>>source>>destination;
    bool ans=s.validPath(n,edges,source,destination);

   // cout<<ans<<endl;

   //print edges
    for(int i=0;i<n;i++){
         cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
    }


    return 0;
}