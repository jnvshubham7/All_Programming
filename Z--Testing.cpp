#include <bits/stdc++.h> using namespace std; int solve(string&s,string& t,int n,int m)
{
  if (n < 0 || m < 0)
    return 0;
  else if (n == 0 && m == 0)
    return 1;

  else if (m == 0)
    return 1;
  else if (dp[n][m] != -1)
    return dp[n][m];
  else {
    int ans = 0;
    if (s[n] == t[m]) {
      ans = solve(s, t, n - 1, m - 1) + solve(s, t, n - 1, m);
    } else {
      ans += solve(s, t, n - 1, m);
    }
    dp[n][m] = ans;
    return ans;
  }
}
int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();
  int i, j;
  int ans = solve(s, t, n - 1, m - 1);
  cout << ans << endl;
}
