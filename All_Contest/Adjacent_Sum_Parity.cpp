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

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll a[n];

        fr(i,n)
        {
            cin>>a[i];
        }

        ll sum=0;

        fr(i,n)
        {

            sum+=a[i];

        }

        if(sum%2==0)
        {
            cout<<"YES"<<endl;
        }

        else {
            cout<<"NO"<<endl;
        }

      






    }


    return 0;
}