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

int main(){
ll t;
cin>>t;
while(t--){

       ll n,sum=0;
   cin>>n;
   priority_queue<int>pq;
   ll arr[n];

    for(ll i=0;i<n;i++){
     cin>>arr[i];
    }



   for(ll i=0;i<n;i++){
   
    if(arr[i]!=0){
        pq.push(arr[i]);
    }
    else{
        if(!pq.empty()){
      ll a=pq.top();
      sum+=a;
      pq.pop();
        }
    }
   }
      cout<<sum<<endl; 
    

}

    return 0;
}