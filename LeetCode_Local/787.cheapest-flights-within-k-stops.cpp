class Solution {
public:

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
    vector<vector<int>> graph(n, vector<int>(n, -1));
    for (const auto& flight : flights) {
        int u = flight[0];
        int v = flight[1];
        int weight = flight[2];
        graph[u][v] = weight;
    }

    vector<vector<int>> dp(K + 2, vector<int>(n, INT_MAX));
    for (int k = 0; k <= K + 1; ++k) {
        dp[k][src] = 0;
    }

    for (int k = 1; k <= K + 1; ++k) {
        for (int v = 0; v < n; ++v) {
            for (int u = 0; u < n; ++u) {
                if (graph[u][v] != -1 && dp[k - 1][u] != INT_MAX) {
                    dp[k][v] = min(dp[k][v], dp[k - 1][u] + graph[u][v]);
                }
            }
        }
    }

    return (dp[K + 1][dst] == INT_MAX) ? -1 : dp[K + 1][dst];
}


};



























// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         const int INF = 1e9; // A very large value to represent infinity

//         // Step 1: Initialize the dp array
//         vector<vector<int>> dp(k + 2, vector<int>(n, INF)); // k+2 for the number of stops

//         // Step 2: Populate dp array with direct flight costs
//         for (const auto& flight : flights) {
//             int u = flight[0];
//             int v = flight[1];
//             int cost = flight[2];
//             if (u == src)
//                 dp[1][v] = cost; // Only direct flights from the source city (k = 1)
//         }

//         // Step 3: Floyd-Warshall algorithm with stops
//         for (int i = 2; i <= k + 1; ++i) {
//             dp[i][src] = 0; // Cost to reach the source city with i stops is 0

//             for (int j = 0; j < n; ++j) {
//                 for (const auto& flight : flights) {
//                     int u = flight[0];
//                     int v = flight[1];
//                     int cost = flight[2];
//                     if (dp[i - 1][u] < INF)
//                         dp[i][v] = min(dp[i][v], dp[i - 1][u] + cost);
//                 }
//             }
//         }

//         // Step 4: Find the minimum cost to reach the destination city with up to k stops
//         int minCost = INF;
//         for (int i = 1; i <= k + 1; ++i)
//             minCost = min(minCost, dp[i][dst]);

//         // Step 5: Check if there is a valid path within k stops
//         if (minCost < INF)
//             return minCost;
//         else
//             return -1;
//     }
// };





// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         const int INF = 1e9; // A very large value to represent infinity

//         vector<vector<pair<int, int>>> adj(n);
//         for (const auto& flight : flights) {
//             int u = flight[0];
//             int v = flight[1];
//             int cost = flight[2];
//             adj[u].push_back({v, cost});
//         }

//         priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
//         vector<vector<int>> dp(k + 2, vector<int>(n, INF));

//         pq.push({0, src, 0}); // {cost, city, stops}

//         while (!pq.empty()) {
//             vector<int> top = pq.top();
//             pq.pop();
//             int cost = top[0];
//             int city = top[1];
//             int stops = top[2];

//             if (city == dst)
//                 return cost;

//             if (stops > k)
//                 continue;

//             if (cost <= dp[stops][city]) {
//                 dp[stops][city] = cost;
//                 for (const auto& neighbor : adj[city]) {
//                     int nextCity = neighbor.first;
//                     int nextCost = neighbor.second;
//                     pq.push({cost + nextCost, nextCity, stops + 1});
//                 }
//             }
//         }

//         return -1;
//     }
// };
