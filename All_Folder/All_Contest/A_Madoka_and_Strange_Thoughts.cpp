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



bool func(ll a, ll b)
{

    ll lc=(a*b)/__gcd(a,b);
    ll gc=__gcd(a,b);


   if( lc/gc <= 3 )
    {
        return true;
    }

    return false;




}




int main(){
ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    ll cnt=0;

    for(ll i=1;i<=n;i++)
    {

        for(ll j=1;j<=n;j++)
        {
           if(func(i,j))
           {
               cnt++;
           }
          

        }



    }


    cout<<cnt<<endl;

    



    

}





    return 0;
}