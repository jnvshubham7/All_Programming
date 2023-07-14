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

    ll a,b,n,m;
    cin>>a>>b>>n>>m;

    if(n<=m)
    {
        cout<<n*min(a,b)<<endl;

    }
    else if((m*a)<=(m+1)*b)
    {
        ll temp1=n/(m+1);
        ll temp2=n%(m+1);
        ll cost=temp1*m*a;

        cost+=temp2*min(a,b);
        cout<<cost<<endl;
    }
    else
    {
        cout<<n*min(a,b)<<endl;
    }

}

    return 0;
}