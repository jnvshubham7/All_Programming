/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    int findCircleNum(vector<vector<int>>& graph) {

        int n = graph.size();
        int m = graph[0].size();
        int ans = 0;
        vector<int> visited(n, 0);
        for (int i = 0; i < n; i++) {
            if (visited[i] == 0) {
                ans++;
                dfs(graph, visited, i);
            }
        }
        return ans;
        
    }

    void dfs(vector<vector<int>>& graph, vector<int>& visited, int i) {
        for (int j = 0; j < graph[i].size(); j++) {
            if (graph[i][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                dfs(graph, visited, j);
            }
        }
    }

   
};
// @lc code=end

