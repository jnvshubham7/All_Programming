#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>



// ll ans(ll n)
// {

//       unordered_map<ll,ll> dp;

//     if(n<=2)
//     {
//         return dp[n]=n;
//     }

    
//         if(dp.size()>0)
//         {
//             return dp[n];
//         }
       
//             return dp[n]=max(n,(ans(n/2)+ans(n/3)+ans(n/4)));
    
    
// }



map<long long,long long> dp;
long long coins(long long c){

     if(c<=2){
         return dp[c]=c;
     }
     if(dp.count(c)){
         return dp[c];
     }
     return dp[c]=max(c,coins(c/2)+coins(c/3)+coins(c/4));
 }


int main(){


long long k;
for(int i=0;i<10;i++){
    cin>>k;
    cout<<coins(k)<<endl;
}
 

//   for(int i=0;i<10;i++)
//   {
//     ll n;
//     cin>>n;

//     cout<<ans(n)<<endl;
    
//   }
    //cout<<coins(n)<<endl;
  




    return 0;
}