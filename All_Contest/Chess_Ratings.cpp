#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  while (t--) {

    int a, b;
    cin >> a >> b;

    if((b-a)%8==0)
    {
        cout << (b-a)/8  << endl;
        }
        else
        {
        cout << (b-a)/8+1  << endl;
    }
  

   // double x = ((b - a) / 8)+ ((b-a)%8);

   // cout << ceil(x) << endl;

   //print double
  //  cout << fixed << setprecision(2) << x << endl;

   //setprecision(2) << fixed;
   // cout << setprecision(2) << fixed << x << endl;
  }

  return 0;
}