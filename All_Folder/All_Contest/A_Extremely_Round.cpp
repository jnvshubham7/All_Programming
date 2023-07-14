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

    ll n ;
    cin>>n;

    if(n<=9){
        cout<<n<<endl;
       
    }

    else if(n>9 && n<=99){
        cout<<9+n/10<<endl;
    }

    else if(n>99 && n<=999){
        cout<<9+9+1<<endl;
    }

    else if(n>999 && n<=9999){
        cout<<9+9+2<<endl;
    }

    else if(n>9999 && n<=99999){
        cout<<9+9+1+2<<endl;
    }

    else if(n>99999 && n<=999999){
        cout<<9+9+1+1+2<<endl;
    }

    else if (n>999999 && n<=9999999){
        cout<<9+9+1+1+2+1<<endl;
    }

   





}

    return 0;
}