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

    ll z_c=0;
    ll o_c=0;

    ll n;
    cin>>n;

    string s;
    cin>>s;


    
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            z_c++;
        }
        else{
            o_c++;
        }
    }

    string ans="";

    while(z_c>0)
    {
        ans+="0";
        z_c--;
    }

    while(o_c>0)
    {
        ans+="1";
        o_c--;
    }

   if(s=="01")
   {
         cout<<"01"<<endl;
    }
    else if(s=="10")
    {
         cout<<"10"<<endl;
    }
    else
    {
         cout<<ans<<endl;
   }



    
    

   




    

}

    return 0;
}