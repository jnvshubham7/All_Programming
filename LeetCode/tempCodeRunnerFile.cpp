/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    

    bool isCyclicUtil(vector<vector<int>>& graph, int v, vector<bool>& visited, vector<bool>& recursionStack) {
    visited[v] = true;
    recursionStack[v] = true;

    for (int u : graph[v]) {
        if (!visited[u]) {
            if (isCyclicUtil(graph, u, visited, recursionStack))
                return true;
        } else if (recursionStack[u]) {
            return true;
        }
    }

    recursionStack[v] = false;
    return false;
}

bool isCyclic(vector<vector<int>>& graph) {
    int V = graph.size();
    vector<bool> visited(V, false);
    vector<bool> recursionStack(V, false);

    for (int v = 0; v < V; ++v) {
        if (!visited[v]) {
            if (isCyclicUtil(graph, v, visited, recursionStack))
                return true;
        }
    }
    return false;
}




    bool canFinish(int n, vector<vector<int>>& graph) {

    
        return !sCyclic(graph);
        
    }

        

      

};
// @lc code=end


