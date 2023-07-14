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

    ll n;

    cin>>n;

    // cout<<n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
        // cout<<a[i];
    }

    unordered_map<ll,ll> m;

    for(ll i=0;i<n;i++){
        m[a[i]]++;
    }

    ll cnt=0;

    int maxx=0;

    for(auto i:m){
        if(i.second>maxx){
            maxx=i.second;
        }
    }


    cout<<n-maxx<<endl;







    

}

    return 0;
}