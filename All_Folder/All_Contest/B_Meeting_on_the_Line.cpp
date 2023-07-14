#include<bits/stdc++.h>
#include <math.h>
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
ll t=1;
cin>>t;
while(t--){

     int n;
        cin>>n;
        vector<double>x(n),t(n);
        for(int i=0;i<n;i++) cin>>x[i];
        for(int i=0;i<n;i++) cin>>t[i];
        
        double mini=2e8,maxi=-2e8;
        for(int i=0;i<n;i++){
            maxi=max(maxi,x[i]+t[i]);
            mini=min(mini,x[i]-t[i]);
        }
        cout<<(maxi+mini)/2.0<<"\n";
    

}

    return 0;
}


















// #include <bits/stdc++.h>
// #include <math.h>
 
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// # define M_PI  3.14159265358979323846
    
//     long long M=1e9+7;
//     long long mod(long long x){
//         return ((x%M + M)%M);
//     }
//     long long add(long long a, long long b){
//         return mod(mod(a)+mod(b));
//     }
//     long long mul(long long a, long long b){
//         return mod(mod(a)*mod(b));
//     }
    
//     void solve (){
//         int n;
//         cin>>n;
//         vector<double>x(n),t(n);
//         for(int i=0;i<n;i++) cin>>x[i];
//         for(int i=0;i<n;i++) cin>>t[i];
        
//         double mini=2e8,maxi=-2e8;
//         for(int i=0;i<n;i++){
//             maxi=max(maxi,x[i]+t[i]);
//             mini=min(mini,x[i]-t[i]);
//         }
//         cout<<(maxi+mini)/2.0<<"\n";
//     }
//     int main(){
//         ios::sync_with_stdio(0);
//         cin.tie(0);
//         cout.tie(0);
//         cout<<fixed;
//         cout<<setprecision(10);
// //        freopen("timber_input.txt", "r", stdin);
// //        freopen("timber_output.txt", "w", stdout);
//         int t=1;
//         cin>>t;
//         for(int i=1;i<=t;i++){
//             // cout<<"Case #"<<i<<": ";
//             solve();
//         }
//         return 0;
//     }