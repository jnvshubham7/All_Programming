#include <bits/stdc++.h>
#include <vector>
#include <climits>

using namespace std;

const int INF = INT_MAX;

// Function to find the vertex with the minimum distance value
int min_dist(int dst[], bool vistd[], int V) {
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
        if (!vistd[v] && dst[v] <= min)
            min = dst[v], min_index = v;
    return min_index;
}

// Function to perform dijkst's algorithm
void dijkst(vector<vector<int>>& grph, int src, int V) {
    int dst[V];
    bool vistd[V];
    for (int i = 0; i < V; i++)
        dst[i] = INF, vistd[i] = false;

    dst[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = min_dist(dst, vistd, V);
        vistd[u] = true;

        for (int v = 0; v < V; v++)
            if (!vistd[v] && grph[u][v] && dst[u] != INF && dst[u] + grph[u][v] < dst[v])
                dst[v] = dst[u] + grph[u][v];
    }

    // Print the results (you can modify this as needed)
    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << "\t" << dst[i] << "\n";
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> grph = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    int src = 0; // Source vertex

    dijkst(grph, src, V);

    return 0;
}
