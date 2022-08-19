/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& c) {

        vector<int> adj[n];

        for(auto& e: c)
        {
            adj[e[0]].push_back(e[1]);

        }
        vector<int> visited(n, 0);
        for(int i = 0; i < n; i++)
        {
            if(visited[i] == 0)
            {
                if(!dfs(adj, visited, i))
                    return false;
            }
        }
        return true;


       

        
    }

    bool dfs(vector<int> adj[], vector<int>& visited, int i)
    {
        if(visited[i] == 1)
            return false;
        visited[i] = 1;
        for(auto& e: adj[i])
        {
            if(visited[e] == 0)
            {
                if(!dfs(adj, visited, e))
                    return false;
            }
        }
        visited[i] = 2;
        return true;
    }
};
// @lc code=end




// vector<vector<int>> g(n);
//         vector<int> in(n, 0);
//         for (auto& e : c) {
//             g[e[1]].push_back(e[0]);
//             in[e[0]]++;
//         }

//         queue<int> q;
//         for (int i = 0; i < n; i++) {
//             if (in[i] == 0) {
//                 q.push(i);
//             }
//         }

//         int cnt = 0;
//         while (!q.empty()) {
//             int u = q.front();
//             q.pop();
//             cnt++;
//             for (auto& v : g[u]) {
//                 if (--in[v] == 0) {
//                     q.push(v);
//                 }
//             }
//         }

//         return cnt == n;