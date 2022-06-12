#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

typedef vector<ll> vi;

 
void solve()
{
    ll n;
    cin >> n;
    set<ll> se;
    for (int i = 1; i * i <= n; i++)
    {
        se.insert(i*i);
    }
 
    for (int i = 1; i * i * i <= n; i++)
    {
        se.insert(i*i*i);
    }
 
 
    cout << se.size()<<endl;
}
int main()
{
 
    ll t;     
    cin >> t; 
    while (t--)
    
    {
        solve();
    }
    return 0;
}