/*
 * @lc app=leetcode id=2316 lang=cpp
 *
 * [2316] Count Unreachable Pairs of Nodes in an Undirected Graph
 */

// @lc code=start
class Solution {
public:


  void dfs(int v, bool vis[],  vector<vector<int>>& edges)
  {
        vis[v] = true;
        for(auto u: edges[v])
        {
            if(!vis[u])
                dfs(u, vis, edges);
        }

  }

 long long countPairs(int n, vector<vector<int>>& edges) {



   bool vis[n];

   for(int i=0;i<n;i++)
   {
         vis[i]=false;
   }

   dfs(0,vis,edges);

   long long count=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            count++;
          //  cout<<count<<endl;
    }
    return count;



        
    }
};
// @lc code=end





int main(){
Solution s;

   //  n = 7, edges = [[0,2],[0,5],[2,4],[1,6],[5,4]]

    int n = 7;
    vector<vector<int>> edges = {{0,2},{0,5},{2,4},{1,6},{5,4}};
    cout<<s.countPairs(n,edges);



    return 0;
}