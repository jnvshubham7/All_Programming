class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];

        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count += isCompleteComponent(i, vis, adj) ? 1 : 0;
            }
        }

        return count;
    }

    bool isCompleteComponent(int node, vector<bool>& vis, vector<int> adj[]) {
        vis[node] = true;
        int degree = adj[node].size();
        bool isComplete = true;

        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                isComplete = false;
                break;
            }
        }

        for (int neighbor : adj[node]) {
            if (!vis[neighbor] && adj[neighbor].size() != degree) {
                isComplete = false;
                break;
            }
        }

        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                isComplete &= isCompleteComponent(neighbor, vis, adj);
            }
        }

        return isComplete;
    }
};
