queue<pair<int, int>> q;
    q.push({1, 0});
    while (q.size()) {
        auto [u, v] = q.front();
        q.pop();
        cout << u << endl;
        for (auto i : p[u]) {
            if (i != v) {
                q.push({i, u});
            }
        }
    }
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> p[100005];

// void dfs(int u, int v) { // u->node and v is parent of u
//     cout << u << endl;
//     for (auto i : p[u]) {
//         if (i != v) {
//             dfs(i, u);
//         }
//     }
// }

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output123.txt", "w", stdout);


    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;