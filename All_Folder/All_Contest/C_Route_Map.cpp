


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
 // fileio;

 ll n,m;
  cin>>n>>m;
  vector<string> vec;
  for(ll i=0;i<n;i++){
    string str;
    cin>>str;
    vec.push_back(str);
  }
  map<string, bool>st;
  for(ll i=0;i<m;i++){
    string str;
    cin>>str;
    st[str]=true;
  }

  for(ll i=0;i<vec.size();i++){
    if(st[vec[i]]){
      cout<<"Yes"<<endl;

    }
    else cout<<"No"<<endl;
  }

  

  return 0;
}









// #include <bits/stdc++.h>
// using namespace std;


// int main() {
 
//  long long int n, m;
//   cin >> n >> m;
//   // scan n number of string  and m number of string
//   string s[n];
//   for (long long int i = 0; i < n; i++) {
//     cin >> s[i];
//   }
//   // scan m number of string
//   string t[m];
//   for (long long int i = 0; i < m; i++) {
//     cin >> t[i];
//   }

//   // make pair of string and its index

//   vector<pair<string, int>> v;
//   for ( long long int i = 0; i < n; i++) {
//     v.push_back(make_pair(s[i], i));
//   }
//   // make pair of string and its index
//   vector<pair<string, int>> w;
//   for (long long int i = 0; i < m; i++) {
//     w.push_back(make_pair(t[i], i));
//   }

//   // check each string in vector v is present in vector w or not
//   // if present then print yes else no
//   for (long long int i = 0; i < n; i++) {
//     for (long long int j = 0; j < m; j++) {
//       if (v[i].first == w[j].first) {
//         cout << "Yes" << endl;
//         break;
//       } else if (j == m - 1) {
//         cout << "No" << endl;
//       }
//     }
//   }

//   return 0;
// }