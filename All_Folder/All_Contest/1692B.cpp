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
    ll a[n];
    unordered_set<ll> s;
    fr(i,n){
        cin>>a[i];
        s.insert(a[i]);
    }

     if((n-s.size())%2==0)
     {
        cout<<s.size()<<endl;


     }

        else
        {
            cout<<s.size()-1<<endl;
        }
    

    

    // unordered_map<ll,ll> mp;
    
    // for(int i=0;i<n;i++){
    //   mp[a[i]]++;
    // }

    // ll ans=0;
    // for(auto it:mp){
    //     if(it.second%2!=0)
    //     {
    //         ans++;
            
    //     }
    // }
    // cout<<ans<<endl;



}

    return 0;
}