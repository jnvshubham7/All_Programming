#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  fileio;

  int t;
  cin >> t;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    int a = x + y;
    if (a <=z) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

    
  }
  return 0;
}