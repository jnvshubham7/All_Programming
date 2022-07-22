#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
 // fileio;

  int t;
  cin >> t;

  while(t--) {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < b) {
      int x = a + c;

      if (x < b) {
        int y = x + d;
        if (y < b) {
          cout << "S" << endl;
        } else {
          cout << "N" << endl;
        }

      } else {

        int z = b + d;
        if (z <= x) {
          cout << "N" << endl;
        } else {
          cout << "S" << endl;
        }
      }
    }
    else {
        int x = b + c;
        if (x <= a) {
            int y = x + d;
            if (y <= a) {
            cout << "N" << endl;
            } else {
            cout << "S" << endl;
            }
        } else {
            int z = a + d;
            if (z < x) {
            cout << "S" << endl;
            } else {
            cout << "N" << endl;
            }
        }
    }

  }


  return 0;
}