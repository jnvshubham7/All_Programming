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

    string s;
    cin>>s;

    string ans="";

    ll one=0,zero=0;
    fr(i,n){
        if(s[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }

   if(zero>one)
   {
    for(int i=0;i<zero;i++)
    {
        ans+='0';
    }
   }
    else
    {
        for(int i=0;i<one;i++)
        {
            ans+='1';
        }
    }
    cout<<ans<<endl;



}

    return 0;
}