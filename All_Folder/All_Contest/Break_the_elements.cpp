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

    // cout<<n;

    ll a[n];


    for(ll i=0;i<n;i++){
        cin>>a[i];
        // cout<<a[i];
    }

    ll odd=0,even=0;

    for(ll i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(odd==0 || even==0){
        cout<<0<<endl;
    }
    else {
        cout<<even<<endl;
    }



    



    

    ll cnt=0;

    // cout<<cnt;

    vector<ll> v;

    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]%2==0)
    //     {
    //         v.push_back(a[i]);
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     //erase a[i] from v and push a[i]/2 , a[i]/2  
    //    if(a[i]%2==0){
    //      v.push_back(a[i]/2);
    //         v.push_back(a[i]/2);
    //         v.erase(find(v.begin(),v.end(),a[i]));
           
    //         cnt++;
            
    //    }
        
    // }


    

    

    

}

    return 0;
}