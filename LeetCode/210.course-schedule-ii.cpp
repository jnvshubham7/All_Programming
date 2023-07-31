class Solution {
public:



        
        vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<int> inDegree(numCourses, 0);
    vector<int> result;

    for (const auto& pre : prerequisites) {
        int u = pre[1];
        int v = pre[0];
        graph[u].push_back(v);
        inDegree[v]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        result.push_back(u);

        for (int v : graph[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    return (result.size() == numCourses) ? result : vector<int>{};
}


































































    // vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    //     vector<vector<int>> graph(numCourses);
    //     for (const auto& edge : prerequisites) {
    //         graph[edge[1]].push_back(edge[0]);
    //     }

    //     vector<int> sortedCourses;
    //     vector<int> color(numCourses, 0); // 0: White (unvisited), 1: Gray (processing), 2: Black (processed)

    //     for (int i = 0; i < numCourses; ++i) {
    //         if (color[i] == 0) {
    //             if (!dfsUtil(graph, i, color, sortedCourses)) {
    //                 return {}; // If cycle is detected, return an empty vector (no valid topological order)
    //             }
    //         }
    //     }

    //     reverse(sortedCourses.begin(), sortedCourses.end());
    //     return sortedCourses;
    // }

    // bool dfsUtil(vector<vector<int>>& graph, int v, vector<int>& color, vector<int>& sortedCourses) {
    //     color[v] = 1; // Mark the vertex as processing (gray)

    //     for (int u : graph[v]) {
    //         if (color[u] == 1) {
    //             return false; // Cycle detected; return false
    //         } else if (color[u] == 0) {
    //             if (!dfsUtil(graph, u, color, sortedCourses)) {
    //                 return false; // Cycle detected in the subtree; return false
    //             }
    //         }
    //     }

    //     color[v] = 2; // Mark the vertex as processed (black)
    //     sortedCourses.push_back(v);
    //     return true;
    // }
};
