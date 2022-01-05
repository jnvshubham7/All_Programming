#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  // fileio;

  int t;
  cin >> t;
  while (t--) {

    int r, s;
    cin >> r >> s;

    if (r <= 2) {
      cout << ((s + 1) / 2) << endl;

    }

    else {
      int ans = ((r + 1) / 2) * ((s + 1) / 2);
      cout << ans << endl;
    }
  }

  return 0;
}