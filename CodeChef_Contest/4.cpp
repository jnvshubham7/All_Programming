// #include <iostream>
// using namespace std;

// int result(int arr[], int d){
//        if(d>arr[i]){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
// }

// int main() {

//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,l;
//         int d=k*l;
//         int arr[n];
//         for(int i=0;i<=n;i++){
//             cin>>arr[i];
//             //cout<<a[i];
//             //  int d=k*l;
//              //cout<<d<<l;
//         // if(d>a[i]){
//         //     cout<<"Yes"<<endl;
//         // }
//         // else{
//         //     cout<<"No"<<endl;
//         // }

//         }
//         // int d=k*l;
//         // if(d>arr){
//         //     cout<<"Yes"<<endl;
//         // }
//         // else{
//         //     cout<<"No"<<endl;
//         // }

//         result(arr, d);
//     }
// 	// your code goes here
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, k, l;
    
    int a[n];
    for (int i = 0; i <= n; i++) {
      cin >> a[i];

      
    }

    int d = k * l;
    int mx = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] > mx) {
        mx = a[i];
      }
    }
    cout << mx;

    if (d > mx) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}