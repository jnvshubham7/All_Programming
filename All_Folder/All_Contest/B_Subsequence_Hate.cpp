#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff(i,a,b) for(ll i=a;i<=b;i++)
ll ps[100007];
void solve(){
    string s;
    cin>>s;
    s = " "+s;
    ll n = s.size()-1;
    ll pre[n+7];pre[0] = 0;
    ff(i,1,n) pre[i] = pre[i-1] + (s[i] == '1');
    ll ps[n+7];ps[0] = 0;
    ff(i,1,n) ps[i] = ps[i-1] + (s[i] == '0');
    //ff(i,1,n) cout<<ps[i]<<" ";
    //cout<<endl;
    //ff(i,1,n) cout<<pre[i]<<" ";
    ll res = 9999999999;
    ff(i,0,n){
        res = min({res,(pre[i] + (ps[n]-ps[i])), (ps[i] + (pre[n] - pre[i]))});
    }
    cout<<res<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--) solve();
}