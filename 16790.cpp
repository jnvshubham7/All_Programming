#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  while (t--) {

    ll n;
    cin >> n;

    if (n % 4 == 0 && n % 6 == 0) {
         cout << n / 6 << " " << n / 4 << endl;
     
    }

    else if (n < 6) {
      if (n % 4 == 0) {
        cout << "1"
             << " "
             << "1" << endl;
      } else {

        cout << "-1" << endl;
      }

    } else if (n % 4 == 0 && n % 6 != 0) {

      if (n % 6 == 4) {
        cout << (n / 6 + 1) << " " << (n / 4) << endl;

      } else {
        cout << "-1" << endl;
      }

    }

    else if (n % 4 != 0 && n % 6 == 0) {

      cout << "-1" << endl;

    }

    else {

     
       cout << "-1" << endl;
    }
  }

  return 0;
}