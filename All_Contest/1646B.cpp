#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<ll> v(n);

for(auto &i:v){
    cin>>i;
}

sort(v.begin(),v.end());

ll s1=v[0]+v[1];
ll s2=v[n-1];

ll i=2;
ll j=n-2;

while(i<j && s1>=s2){
    s1+=v[i];
    s2+=v[j];
    i++;
    j--;
}

//if s2>s1 then print yes else no
if(s2>s1){
    cout<<"Yes"<<endl;
}else cout<<"No"<<endl;
















//     ll n;
//     cin>>n;
//      ll arr[n];
//         for(ll i=0;i<n;i++){
//             cin>>arr[i];
//         }
//    ll red_sum=0,blue_sum=0;
//    // ll red_count=0,blue_count=0;
// //take last element of array and add it to red_sum 
// //take first two elements of array and add it to blue_sum
// //if red_sum>blue_sum, then print yes else continue

//    for(ll i=0;i<2;i++){
//        blue_sum+=arr[i];
//    }
//    for(ll i=n;i>n-2;i--){
//        red_sum+=arr[i-1];
//    }    
//     if(red_sum>blue_sum){
//          cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
   



}

    return 0;
}