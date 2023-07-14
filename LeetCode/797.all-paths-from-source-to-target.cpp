/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        path.push_back(0);
        dfs(graph, 0, path, result);
        return result;




    }

    void dfs(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& result) {
        if (node == graph.size() - 1) {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < graph[node].size(); i++) {
            path.push_back(graph[node][i]);
            dfs(graph, graph[node][i], path, result);
            path.pop_back();
        }
    }

};
// @lc code=end

