// #include <bits/stdc++.h>
// using namespace std;
// #define fileio \
//   freopen("input.txt", "r", stdin); \ freopen("output.txt", "w", stdout)

// int main() {
//   fileio;

//   int t;
//   cin >> t;
//   while (t--) {
//     int a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
//     if (a < b && a < c) {
//       if (b + c <= d && a <= e) {
//         cout << "YES" << endl;
//       } else {
//         cout << "NO" << endl;
//       }

//     }

//     else if (b < a && b < c) {
//       if (a + c <= d && b <= e) {
//         cout << "YES" << endl;
//       } else {
//         cout << "NO" << endl;
//       }

//     }

//     else {
//       if (a + b <= d && c <= e) {
//         cout << "YES" << endl;
//       } else {
//         cout << "NO" << endl;
//       }
//     }
//   }

//   return 0;
// }

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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int flag = 0;

    if (b + c <= d && a <= e) {
      flag = 1;
    } else if (a + c <= d && b <= e) {
      flag = 1;
    } else if (a + b <= d && c <= e) {
      flag = 1;
    } else {
      flag = 0;
    }
    if (flag == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}