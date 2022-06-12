#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  while (t--) {

    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int m;
    cin>>m;
    // cin>>n;

    

    int b[m];
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }

    // find max element in a and b
    int max_a = INT_MIN;
    int max_b = INT_MIN;
    for (int i = 0; i < n; i++) {
      if (a[i] > max_a) {
        max_a = a[i];
      }
    }
    for (int i = 0; i < m; i++) {
      if (b[i] > max_b) {
        max_b = b[i];
      }
    }


   // cout<<max_a<<" "<<max_b<<endl;

    if (max_a > max_b) {
      cout << "Alice" << endl;
      cout << "Alice" << endl;

    } else if (max_a < max_b) {
      cout << "Bob" << endl;
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
      cout << "Bob" << endl;
    }

    // if(max_a==max_b){
    //     cout<<max_a<<endl;
    // }
    // else{
    //     cout<<max_b<<endl;
    // }
  }

  return 0;
}