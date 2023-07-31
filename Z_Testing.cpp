#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> findMinimumInversions(int N, const vector<vector<int>>& threads) {
    vector<int> indegree(N + 1, 0); // To store the indegree of each node
    unordered_map<int, vector<int>> outgoingThreads; // To store outgoing threads for each node

    // Calculate the indegree and outgoing threads for each node
    for (const vector<int>& thread : threads) {
        int u = thread[0];
        int v = thread[1];
        indegree[v]++;
        outgoingThreads[u].push_back(v);
    }

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> result; // To store the points requiring minimum inversions

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        result.push_back(curr);

        // Decrease the indegree of connected nodes and add them to the queue if indegree becomes 0
        for (int v : outgoingThreads[curr]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    return result;
}

int main() {
    int N = 3;
    vector<vector<int>> threads = {
        {2, 1},
        {2, 3}
    };

    vector<int> result = findMinimumInversions(N, threads);

    for (int point : result) {
        cout << point << " ";
    }
    cout << endl;

    return 0;
}
