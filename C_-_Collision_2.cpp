#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n;
    cin>>n;
    ll x,y;



vector<ll,ll> v(n);


//take input
for(ll i=0;i<n;i++){
    cin>>x>>y;
    v[i]=make_pair(x,y);
}

//check  which index 2nd element of each pair is same store in vector
vector<ll> v1;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(v[i].second==v[j].second){
            v1.push_back(j);
        }
    }
}

 






//
//

//check any y1 to yn  same or not

//in vector v check y is same which index is same












string s;
cin>>s;

//print v1
for(ll i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}



// for(ll i=0;i<s.length();i++){
//     for(ll j=0;j<v1.size();j++){
//         if(s[i]==v[v1[j]].first){
//             cout<<"YES"<<endl;
//             return 0;
//         }
//     }
// }

//make pair of string and int
// vector<pair<string,ll>> v;
// for(ll i=0;i<n;i++){
//     v.push_back(make_pair(s[i],i));
// }

// //check two robot at same row or column and string is same
// ll count=0;
// for(ll i=0;i<n;i++){
//     for(ll j=0;j<n;j++){
//         if(v[i].first==v[j].first && v[i].second!=v[j].second){
//             count++;
//         }
//     }
// }


//print count
//cout<<count<<endl;


//check same row and column 



//s is direction of robot and x,y is position of robot If there will be a collision, print Yes; otherwise, print No.


//check if there will be a collision    










    return 0;
}