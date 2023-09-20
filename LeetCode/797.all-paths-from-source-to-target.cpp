/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {

        int n=g.size();

        vector<int> vis(n,0);

        path.push_back(0);

        dfs(g,0,n-1,vis);

        return ans;





       


    }


    void dfs(const vector<vector<int>>& g,int start,int end,vector<int>& vis){

        if(start==end)
        {
            ans.push_back(path);
            return;
        }


        vis[start]=1;

        for(int i=0;i<g[start].size();i++)
        {
            if(!vis[g[start][i]])
            {
                path.push_back(g[start][i]);
                dfs(g,g[start][i],end,vis);
                path.pop_back();
            }

        }

        vis[start]=0;








    }


    













        // int n = graph.size();
        // vector<vector<int>> adj(n);

        // for (const auto& edge : graph) {
        //     int u = edge[0];
        //     int v = edge[1];
        //     adj[u].push_back(v);
        // }

        // vector<int> vis(n, 0);
        // dfs(adj, 0, n - 1, vis);

        // return ans;
    // }






    // void dfs(const vector<vector<int>>& adj, int start, int end, vector<int>& vis) {
    //     vis[start] = 1;
    //     path.push_back(start);

    //     if (start == end) {
    //         ans.push_back(path);
    //         vis[start] = 0;
    //         path.pop_back();
    //         return;
    //     }

    //     for (int neighbor : adj[start]) {
    //         if (!vis[neighbor]) {
    //             dfs(adj, neighbor, end, vis);
    //         }
    //     }

    //     vis[start] = 0;
    //     path.pop_back();
    // }
};
// @lc code=end
