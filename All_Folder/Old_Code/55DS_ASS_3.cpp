
#include <bits/stdc++.h>
using namespace std;
vector<int> G[10000];
void dfs(int visited[1000], int u, int v, vector<int> path) {
  if (u == v) {
    for (int i = 0; i < path.size(); i++)
      cout << path[i] << " ";
    cout << endl;
  } else {
    for (int i = 0; i < G[u].size(); i++) {
      int child = G[u][i];
      if (visited[child] == 0) {
        visited[child] = 1;
        path.push_back(child);
        dfs(visited, child, v, path);
        path.pop_back();
      }
    }
  }
  visited[u] = 0;
}
int main() {
  int edges;
  cin >> edges;
  while (edges--) {
    int x, y;
    cin >> x >> y;
    G[x].push_back(y);
    G[y].push_back(x);
  }
  int visited[1000] = {0};
  vector<int> path;
  int u, v;
  cin >> u >> v;

  path.push_back(u);

  dfs(visited, u, v, path);
}
