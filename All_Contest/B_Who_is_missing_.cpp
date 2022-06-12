#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {

  int n;
  cin >> n;
  n = n * 4;
  int arr[n];
  for (int i = 0; i < n-1; i++) {
    cin >> arr[i];
  }


  //find all interger number of occurrences in the array
    unordered_map<int, int> m;
    for (int i = 0; i < n-1; i++) {
      m[arr[i]]++;
    }



 

    //print all number in map 
    // for (auto it = m.begin(); it != m.end(); it++) {
    //   cout << it->first << " " << it->second << endl;
    // }

    
  // for (auto i : m){
  //       cout << i.first << "   " << i.second
  //            << endl;

  // }

    //find the number of occurrences of each number
    unordered_map<int, int>::iterator it;

    //which occurrences  is equal to 3 print that number 
    for (it = m.begin(); it != m.end(); it++) {
      if (it->second == 3) {
        cout << it->first << endl;
      }
    }

    // for (it = m.begin(); it != m.end(); it++) {
    //   cout << it->first << " " << it->second << endl;
    // }



//   for (int i = 0; i < n-1; i++) {
//     cout << arr[i] << " ";
//   }



  //     int n;
  //     cin>>n;
  //     int arr[n][n][n][n];

  //    //cin all the elements

  //    for(int i=0;i<n;i++){
  //        for(int j=0;j<n;j++){
  //            for(int k=0;k<n;k++){
  //                for(int l=0;l<n;l++){
  //                    cin>>arr[i][j][k][l];
  //                }
  //            }
  //        }
  //    }

  //        //cout all the elements

  //          for(int i=0;i<n;i++){
  //               for(int j=0;j<n;j++){
  //                 for(int k=0;k<n;k++){
  //                      for(int l=0;l<n;l++){
  //                           cout<<arr[i]<<" ";
  //                      }
  //                 }
  //               }
  //          }

  return 0;
}