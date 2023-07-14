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

    ll a[n];

    fr(i,n){
        cin>>a[i];
    }

    if(n==1){
       cout<<0<<endl;
         continue;
    }

    sort(a,a+n);

    // priority_queue<ll> diff;

    // fr(i,n-1){
    //     diff.push(a[i+1]-a[i]);
    // }

    



    vector<ll> diff;

    fr(i,n-1){
        diff.pb(a[i+1]-a[i]);
    }

    sort(all(diff));
    reverse(all(diff));

    ll xx=0;

    for(auto x:diff){
       if(x>=a[0] && 2*x<=a[n-1])
       {
              xx=x;
              break;

       }
         
    }

    ll cnt=0;

    ll avg=(2*xx+xx)/2;

    cout<<avg<<endl;

    // ll sss=2*xx-1;
    // ll lll=xx;

    // cout<<lll<<" "<<sss<<endl;

    

    for(int i=0;i<n;i++)
    {

        if(a[i]>=avg)
        {
            cnt+=a[i]/avg;
            cout<<a[i]/avg<<" ";
        }
        // else 
        // {
        //     cnt+=a[i]/lll;
        // }



    }

    cout<<endl;

    cout<<cnt<<endl;





    

}

    return 0;
}