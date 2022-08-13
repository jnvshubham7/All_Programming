#include<bits/stdc++.h>
using namespace std;
#define ll long long


 long long tmp=1e18;
    bool p=false;
    long long dfs(int curr,vector<vector<long long>> &adj , vector<bool> &vis ,int *cap)
    {
       vis[curr]=true;
       long long mx=0;
       int l=0;
        for(auto nab : adj[curr])
       {
           if(!vis[nab])
           {
               l++;
               mx=max(mx,dfs(nab,adj,vis,cap));
               if( l*mx > tmp)
               {
                    p=true;
                    return -1;
               }
            }
       }
       return  (cap[curr-1]+mx*l);
    }
    long long minimum_amount(vector<vector<int>> &v, int num, int start, int *cap){
       
       vector<vector<long long>> adj(num+1);
       vector<bool> vis(num+1,false);
        for(int i=0;i<v.size()-1;++i)
       {
           adj[v[i][0]].push_back(v[i][1]);
           adj[v[i][1]].push_back(v[i][0]);
       }
       long long t= dfs(start,adj,vis,cap);
    
        if(p || t>tmp)
        return -1;
        return t;
    }

    int main(){
//         Input:
// N = 4 and S = 1
// Edges = [[1, 2], [2, 3], [3, 4]]
// Cap = [1, 1, 1, 1]

// 4 1
// 1 1 1 1
// 1 2
// 1 3
// 2 4

        int n,s;
        cin>>n>>s;
        vector<int> cap;
         for(int i=0;i<n;++i)
        {
            int c;
            cin>>c;
            cap.push_back(c);
        }

        vector<vector<int>> v;
       
        for(int i=0;i<n-1;++i)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        cout<<minimum_amount(v,n,s,cap.data())<<endl;
       
        return 0;
    }