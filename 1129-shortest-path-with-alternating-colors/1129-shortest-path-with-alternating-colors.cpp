class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        const int INF = 1e9;
        
        vector<vector<pair<int, int>>> graph(n); // {next_node, color}, color = 0 (red) or 1 (blue)
        
        for (const auto& redEdge : redEdges) {
            graph[redEdge[0]].push_back({redEdge[1], 0});
        }
        
        for (const auto& blueEdge : blueEdges) {
            graph[blueEdge[0]].push_back({blueEdge[1], 1});
        }
        
        vector<vector<int>> distance(n, vector<int>(2, INF));
        distance[0][0] = distance[0][1] = 0;
        
        queue<pair<int, int>> q;
        q.push({0, 0}); // {node, color}
        q.push({0, 1});
        
        while (!q.empty()) {
            auto [node, color] = q.front();
            q.pop();
            
            int next_color = 1 - color;
            
            for (const auto& edge : graph[node]) {
                int next_node = edge.first;
                int edge_color = edge.second;
                
                if (edge_color == next_color && distance[next_node][next_color] == INF) {
                    distance[next_node][next_color] = distance[node][color] + 1;
                    q.push({next_node, next_color});
                }
            }
        }
        
        vector<int> answer;
        for (const auto& dist : distance) {
            int min_dist = min(dist[0], dist[1]);
            answer.push_back((min_dist == INF) ? -1 : min_dist);
        }
        
        return answer;
    }
};
