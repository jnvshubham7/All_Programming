#include <bits/stdc++.h>

#define py cout << "YES\n";
#define pn cout << "NO\n";
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

void asquare() {
  long long int a, b, c;
  cin >> a >> b >> c;
  if ((b - a) == (c - b)) {
    cout << "YES\n"; 
    return;
  }
  if ((a + c) % (2 * b) == 0) {
    cout << "YES\n";
     return;
  }
  if ((2 * b - a) > 0)
    if ((2 * b - a) % c == 0) {
      cout << "YES\n";
       return;
    }
  if ((2 * b - c) > 0)
    if ((2 * b - c) % a == 0) {
     cout << "YES\n";
      return;
    }
 cout << "NO\n";
}
int main() {
  // fileio;

  int t;
  cin >> t;
  while (t--) {
    asquare();
  }

  return 0;
}