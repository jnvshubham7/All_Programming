#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  ll t;
  cin >> t;
  while (t--) {
    ll m, n;              
    cin >> m >> n;
    

    // ll N,X;
    // cin >> N >> X;

    //if x is bwtween 0 and N
    // if (X >= 0 && X <= N) {
    //   cout << X << endl;
    // } 
    //if x>n then 

 // if x is greater than N then it is cyclically converted to fit into the range 0 to N
//  Value N+1 will be stored as 0
//  Value N+2 will be stored as 1

    // if (X > N) {
    //   X = X % N -1;  
    // }

    // cout << X << endl;
  



    //  if (X >= N) {
    //   cout << X % N -1 << endl;
    // } 
    //  else if (X < 0) {
    //   cout << (N + X) % N << endl;
    // }
    // else {
    //   cout << X << endl;
    // }

    

    //if x is less than 0 then it is cyclically converted to fit into the range 0 to N
   

//  }
 // }
 // return 0;

// . For example:

//     Value N+1

// will be stored as 0
// .
// Value N+2
// will be stored as 1. 
    // else {while(X>N){
    //   X-=N;
    
    // if(X>=0 && X<=N){
    //   cout<<X-1<<endl;
    // }
    // }
  //  }




    // Chef wants to store some important numerical data on his personal computer
    //         .He is using a new data type that can store values only
    //             from 0 till N both inclusive
    //         .If this data type receives a value greater than N then it is
    //             cyclically converted to fit into the range 0 to N

    //         .For example :

    //     Value N +
    //     1

    //     will be stored as 0.Value N +
    //     2 will be stored as 1

    //         .

    //             and so on…


   
       

        if (m >= n) {
      cout << n << endl;
    }

    while (m < n) {
      n = n - m-1;
      if (m >= n) {
        cout << n << endl;
        break;
      }
    }

    //  if(m<n)
    //    if(m>=n){
    //         cout<<n<<endl;
    //     }
    //     else{
    //       cout<<(n-m)<<endl;
    //     }
  }

  return 0;
}