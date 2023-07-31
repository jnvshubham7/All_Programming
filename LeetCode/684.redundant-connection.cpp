/*
 * @lc app=leetcode id=684 lang=cpp
 *
 * [684] Redundant Connection
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
    




// @lc code=start
class Solution {
public:
    
    unordered_map<int,int> parent;

    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        //print parent
        

        int n=edges.size();

        vector<int> vis (n+1,0);

        for(int i=0; i<n; i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(vis[u]==0){
                parent[u]=u;
                vis[u]=1;
            }
            if(vis[v]==0){
                parent[v]=v;
                vis[v]=1;
            }
            int pu=find(u);
            int pv=find(v);
            if(pu==pv){
               // return edges[i];
            }
            parent[pv]=pu;
        }
       

        //print parent
        for(auto i:parent){
            cout<<i.first<<" "<<i.second<<endl;
        }


         return {};

      
    }

    int find(int u){
        if(parent[u]==u){
            return u;
        }
        return find(parent[u]);
    }
};
// @lc code=end





int main(){
Solution s;


    // edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]

    vector<vector<int>> edges = {{1,2},{2,3},{3,4},{1,4},{1,5}};
    s.findRedundantConnection(edges);




    return 0;
}