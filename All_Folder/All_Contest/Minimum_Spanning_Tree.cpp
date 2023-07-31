#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Data structure to represent an edge in the graph
struct Edge {
    int v, weight;
    Edge(int v, int weight) : v(v), weight(weight) {}
};

// Prim's algorithm to find the Minimum Spanning Tree
int primMST(int n, vector<vector<Edge>>& graph) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> visited(n, false);
    int mstWeight = 0;

    // Start with vertex 0 as the starting point
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        if (visited[u])
            continue;

        visited[u] = true;
        mstWeight += weight;

        for (const Edge& edge : graph[u]) {
            int v = edge.v;
            if (!visited[v]) {
                pq.push({edge.weight, v});
            }
        }
    }

    return mstWeight;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u - 1].emplace_back(v - 1, weight); // Convert node IDs to 0-based indexing
        graph[v - 1].emplace_back(u - 1, weight); // For undirected graph, add reverse edge
    }

    int mstWeight = primMST(n, graph);
    cout << mstWeight << endl;

    return 0;
}
