#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, k, l;
    int d = k * l;
    int a[n];
    for (int i = 0; i <= n; i++) {
      cin >> a[i];
      sort(a[0], a[n]);
      cout<<a[i];

    }

    
    if (d > a[i]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}