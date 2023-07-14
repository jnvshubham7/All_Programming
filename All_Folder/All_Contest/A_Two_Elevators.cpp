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

    ll a,b,c;
    cin>>a>>b>>c;

    if(a==1)
    {
        cout<<1<<endl;
    }

    else 
    {
        if(b==1)
        {

            // cout<<min(abs(a-1),(2*abs(b-c)))<<endl;

            ll x=abs(a-1);
            ll y=2*abs(b-c);

            if(x>y)
            {
                cout<<2<<endl;
            }
            else if(x<y)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<3<<endl;
            }
            


        }

        else 
        {
            // cout<<min(abs(a-1),(abs(b-c)+abs(c-1)))<<endl;

            ll x=abs(a-1);
            ll y=abs(b-c)+abs(c-1);

            if(x>y)
            {
                cout<<2<<endl;
            }
            else if(x<y)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<3<<endl;
            }
        }

        






    }

    

}

    return 0;
}