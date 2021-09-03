#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int a = 0, b = 0;
    {
      if (a1 >= b1) {
        a++;
      } else {
        b++;
      }
    }
    {
      if (a2 >= b2) {
        a++;
      } else {
        b++;
      }
    }
    {
      if (a3 >= b3) {
        a++;
      } else {
        b++;
      }
    }

     cout<<a<<b;
  }

  // your code goes here
  return 0;
}
