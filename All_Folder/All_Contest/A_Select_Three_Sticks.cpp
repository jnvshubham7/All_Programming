#include<bits/stdc++.h>
using namespace std;
#define ll int
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

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    vector<ll> v;

    for(int i=1;i<n-1;i++)
    {
        v.push_back((arr[i]-arr[i-1])+(arr[i+1]-arr[i]));
        
    }

    sort(v.begin(), v.end());

    cout<<v[0]<<endl;





    



    

}

    return 0;
}