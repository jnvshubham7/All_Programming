#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
//ll mod=1000000007;
using namespace std;
 

 

 
void solve()
{
   ll n;cin>>n;
   vector<vector<ll>> v(n);
   for(int i=0;i<n;i++){
       ll l,r,c;
       cin>>l>>r>>c;
       v[i]={l,r,c};
   }
    ll minLeft = 1e10, costL = 0;
    ll maxRight = 0, costR = 0;
    ll maxLen = 0, costLen = 0;
    for (int i = 0; i < n; i++)
    {
        ll l=v[i][0], r=v[i][1], c=v[i][2]; 
 
        if (l < minLeft){
            minLeft = l, costL = c;
        }
        else if(l == minLeft){
            costL = min(costL, c);
        }
 
        if (maxRight < r){
            maxRight = r, costR = c;
        }
        if (maxRight == r){
             costR = min(costR, c);
        }
 
        if (maxLen < r - l + 1){
             maxLen = r - l + 1, costLen = c;
        }
        if (maxLen == r - l + 1){
             costLen = min(costLen, c);
        }
 
        ll cost = costL + costR;
        if (maxLen == maxRight - minLeft + 1){
               cost = min(cost, costLen);
        }

        cout << cost << endl;
    }
}

int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}

