#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  ll t;
  cin >> t;
  while (t--) {

    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // a[i] push in v
    //  vector<int> v;
    //  for(int i=0;i<n;i++){
    //      v.push_back(a[i]);
    //  }

    ll m;
    cin >> m;

    ll b[m];

    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }

    ll sum = 0;

    for (int i = 0; i < m; i++) {
      sum += b[i];
      //   if (sum >= n)
      //     sum = sum - n;
    }

    if (sum >= n) {
      sum = sum % n;
      // cout<<x<<" ";
    }

    // cout<<x<<endl;

    cout << a[sum] << endl;

    // for(int i=0;i<n;i++){
    //    if(i=x){
    //        cout<<a[i]<<endl;
    //        break;
    //    }
    //    else {
    //        continue;
    //    }
    // //    else{
    // //        cout<<b[i]<<" ";
    // //    }
    // }

    // take b[i] number of element from starting of a[] then replace it with
    // rest of a[] and order will not change

    // for(int i=0;i<m;i++){

    //     int x=b[i];

    //     //from 0 to x-1 index remove x elements and add that elements in v

    //    // for(int j=0;j<x;j++){
    //         //erase from v[0] to v[x-1]
    //        // v.erase(v.begin());

    //        //erase one at a time
    //           v.erase(j,1);

    //       //  v.erase(v.begin());
    //    // }

    //    // for(int j=0;j<temp;j++){

    //         //front pop and back push in v
    //        // v.erase(v.begin(),j);
    //        // v.push_back(a[j]);

    //         // int k=a[j];
    //         // a[j]=a[temp];
    //         // a[temp]=k;
    //         // temp++;
    //   //  }

    //     // int j=0;
    //     // while(b[i]>0){
    //     //     a[j]=a[j+1];
    //     //     j++;
    //     //     b[i]--;
    //     // }
    //     // a[j]=a[j-1];
    // }

    // //print
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;
  }

  return 0;
}