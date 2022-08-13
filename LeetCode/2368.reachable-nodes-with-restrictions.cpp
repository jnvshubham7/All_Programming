/*
 * @lc app=leetcode id=2368 lang=cpp
 *
 * [2368] Reachable Nodes With Restrictions
 */

// @lc code=start
class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {

        vector<int> graph[n+1];
        for(auto& e:edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        vector<int> vis(n+1,0);

        for(auto i:restricted)
        {
            vis[i]=1;
        }

        int cnt=0;
        dfs(0,graph,vis,cnt);
        return cnt;
        
    }

    void dfs(int cur,vector<int> graph[],vector<int>& vis,int& cnt)
    {
        vis[cur]=1;
        for(auto& i:graph[cur])
        {
            if(vis[i]==0)
            {
                dfs(i,graph,vis,cnt);
            }
        }
        cnt++;
    }
};
// @lc code=end

