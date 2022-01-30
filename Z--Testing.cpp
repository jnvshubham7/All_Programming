#include <bits/stdc++.h>
using namespace std;
// ll defin
#define ll long long

#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    int b[n];

    // take input
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] + x == b[i]  || a[i] + y == b[i]) {
        count++;
      }
    }

    // for (int i = 0; i < n; i++) {
    //   if (a[i] + y == b[i]) {
    //     count++;
    //   }
    // }

    if (count == n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}