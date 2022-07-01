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

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        ll s,x,y,z;
        cin>>s>>x>>y>>z;

        ll mn=min(x,y);

        if((x+y+z)<=s)
        {
            cout<<0<<endl;
        }
        else if((s-mn)>=z)
        {
            cout<<1<<endl;
        }

        else {
            cout<<2<<endl;
        }
    }

    return 0;
}
