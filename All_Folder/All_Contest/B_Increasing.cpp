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

    ll arr[n];

    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    // check strictly increasing

    ll flag=0;
    

    for(ll i=1;i<n;i++)
    {
        if(!(arr[i]-arr[i-1]>0))
        {
            cout<<"NO"<<endl;
            flag=1;
           break;
          
        }
    }


    if(flag==0){
        cout<<"YES"<<endl;
    }


   



}

    return 0;
}