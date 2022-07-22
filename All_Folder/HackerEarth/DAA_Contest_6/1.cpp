#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast                                                                   \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);

#define f() for (ll i = 0; i < n; i++)
#define fj() for (ll j = 0; j < m; j++)
#define f1() for (ll i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define push_back push_back
#define mp make_pair
#define erase_multi(right, val)                                                \
  right.erase(right.find_by_order(right.order_of_key(val)));
#define int ll
#define vi vector<int>
#define vvi vector<vi>
#define a6 1000001
#define p push
#define pii pair<int, int>
#define um unordered_map<int, int>
#define flag                                                                   \
  if (fg)                                                                      \
    cout << "YES" << endl;                                                     \
  else                                                                         \
    cout << "NO" << endl;
#define fo(o, n) for (int i = o; i < n; i++)
#define fro(o, n) for (int i = o; i >= 0; i--)
#define a7 10000001
#define inf INT_MAX
#define ff first
#define ss second
#define vpii vector<pii>
#define endl "\n"
#define len(s) (int)s.size()
#define google                                                                 \
  int t;                                                                       \
  cin >> t;                                                                    \
  for (int i = 1; i <= t; i++) {                                               \
    cout << "Case #" << i << ": ";                                             \
    solve();                                                                   \
  }

const int N = 2e5 + 10;
int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
                      int K) {
  vector<vector<int>> dp(K + 2, vector<int>(n, INT_MAX));

  // dp[i][j] = Dist to reach j using atmost i edges from src

  for (int i = 0; i <= K + 1; i++) {
    dp[i][src] = 0; // Dist to reach src always zero
  }

  for (int i = 1; i <= K + 1; i++) {
    for (auto &f : flights) {
      // Using indegree
      int u = f[0];
      int v = f[1];
      int w = f[2];

      if (dp[i - 1][u] != INT_MAX)
        dp[i][v] = min(dp[i][v], dp[i - 1][u] + w);
    }
  }

  return (dp[K + 1][dst] == INT_MAX) ? -1 : dp[K + 1][dst];
}

signed main() {
  fast int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    vector<vi> adj;
    for (int i = 0; i < m; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      adj.push_back({a, b, c});
    }
    int src, des, k;
    cin >> src >> des >> k;
    cout << findCheapestPrice(n, adj, src, des, k) << endl;
  }
}