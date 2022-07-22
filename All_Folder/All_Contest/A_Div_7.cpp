#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  while (t--) {

    int n;
    cin >> n;
    if (n >= 10 && n<=999){

        if(n%7==0){
            cout<<n<<endl;
        }
        else {

             int m = n / 7;
             int ans= (7*(m+1));
            // check number does not have any leading zeroes and is divisible by 7
            



    // cout<<m<<endl;
    cout << (7*(m+1)) << endl;



        }
     
    }
  }

  return 0;
}