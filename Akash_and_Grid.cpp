#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  //  fileio;

  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    int x1 = (n + 1) / 2;
    int y1 = (n + 1) / 2;
    if (n <= 3) {
      cout << "1" << endl;

    }

    else if (((x1 - x) == 1) || ((y1 - y) == 1)) {
      cout << "1" << endl;
    }

    // else if (((x1 - x) == 2) || ((y1 - y) == 2)) {
    //   cout << "2" << endl;

    // }

    else if (((x1 - x) == 3) || ((y1 - y) == 3)) {
      cout << "3" << endl;

    }

    else if (((x1 - x) == 4) || ((y1 - y) == 4)) {

      cout << "4" << endl;

    }

    else {
      cout << "0" << endl;
    }
  }

  return 0;
}