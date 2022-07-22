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


    ll ans=n+(n*(n+1))/2;

    cout<<ans<<endl;

    // 1 2 5 11 19 29 

    //formula = (n*(n+1))/2
   

//     dp[0] = 0 and dp[1] = 2
// The DP recurrence is dp[i] = i + i + 1 + dp[i – 2].

// vector<ll> dp(n+2,0);

    // dp[0] = 0;
    // dp[1] = 2;
    // for(int i=2;i<=n;i++){
    //     dp[i] = i + i + 1 + dp[i-2];
    // }
    // cout<<dp[n]<<endl;



    //print dp
    // for(int i=0;i<=n;i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;

    

}

    return 0;
}