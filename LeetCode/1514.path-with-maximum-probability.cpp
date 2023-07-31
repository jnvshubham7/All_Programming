/*
 * @lc app=leetcode id=1514 lang=cpp
 *
 * [1514] Path with Maximum Probability
 */

// @lc code=start
class Solution {
public:

    double ans=0;
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {

        //vis
        vector<bool> vis(n, false);

        //adj list

        vector<vector<pair<int, double>>> adj(n);

        for(int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});

            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }

        dfs(adj, vis, start, end, 1);

        return ans;
        


        

    }

    void dfs(vector<vector<pair<int, double>>>& adj, vector<bool>& vis, int start, int end, double prob)
    {
        if(start == end)
        {
            ans = max(ans, prob);

            return;
        }

        vis[start] = true;

        for(auto it: adj[start])
        {
            if(!vis[it.first])
            {
                dfs(adj, vis, it.first, end, prob * it.second);
            }
        }

        vis[start] = false;
    }

    
};
// @lc code=end

