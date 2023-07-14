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


    ll n,c;
    cin>>n>>c;

    ll arr[n];

    fr(i,n){
        cin>>arr[i];
    }

    map<ll,ll> m;

    fr(i,n){
        m[arr[i]]++;
    }

    ll cnt=0;

    for(auto x:m){
        if(x.second>1){
            cnt+=min(x.second,c);
        }

        else {
            cnt+=min(x.second,c);
        }
    }

    cout<<cnt<<endl;





    

}

    return 0;
}