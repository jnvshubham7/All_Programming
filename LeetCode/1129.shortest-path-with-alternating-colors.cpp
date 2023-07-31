/*
 * @lc app=leetcode id=1129 lang=cpp
 *
 * [1129] Shortest Path with Alternating Colors
 */

// @lc code=start
class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {

        //use dijkstra algorithm

        vector<vector<pair<int,int>>> graph(n);

        for(auto& edge : redEdges)
            graph[edge[0]].push_back({edge[1], 0});

        for(auto& edge : blueEdges)
            graph[edge[0]].push_back({edge[1], 1});
        
    }
};
// @lc code=end

