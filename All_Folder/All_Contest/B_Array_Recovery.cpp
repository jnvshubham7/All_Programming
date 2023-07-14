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
        ll d[n];
        for(ll i=0;i<n;i++)
        {
            cin>>d[i];
        }
        //ll ans=0;
        ll a[n];
        a[0]=d[0];
        bool flag=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]-d[i]>=0 && d[i]!=0)
            {
                flag=1;
                break;
            }
            else
            {
                a[i]=a[i-1]+d[i];
            }
        }
        if(flag==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;

    

}

    return 0;
}