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

    vector<ll> v(n+1);

    for(ll i=1;i<=n;i++){
       v[i]=i;
    }

    reverse(v.begin()+1,v.end());

    //print v

    vector<ll> ans(n+1);

    int ind=0;

    for(ll i=1;i<=n;i++){
        if(v[i]!=i){
            ans[i]=v[i];
            v[i]=i;
        }
        else {
            ind=i;
            break;

        }
        // else{
        //     if(i==n){
        //         ans[i]=v[i-1];
        //         v[i-1]=i;
        //     }
        //     else{
        //         ans[i]=v[i+1];
        //         v[i+1]=i;
        //     }
        // }
    }

    //reverse v

    reverse(v.begin()+ind,v.end());

    for(ll i=ind;i<=n;i++){

        if(ans[i]!=0)
        {
            continue;
        }
        else{
            ans[i]=v[i];

        }
        
    }

    int flag=0;

    // for(ll i=1;i<=n;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    // for(ll i=1;i<=n;i++){
    //     if(ans[i]==i){
    //         flag=1;
    //         break;
    //     }
    // }

    // diff more than 1  flag=1

    for(ll i=1;i<=n;i++){

        if((abs(ans[i+1]-ans[i])>1 && (i==1 ))   || (abs(ans[i]-ans[i-1])>1 && (i==n )) ){
            flag=1;
            break;
        }
       
    }



    if(flag==1){
        cout<<"-1"<<endl;
    }
    else{
        for(ll i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    





    

    //put 1 to n
    // for(ll i=0;i<n;i++){
    //     v[i]=i+1;
    // }

    // vector<ll> ans(n);


    // for(ll i=n-1;i>=0;i--){
       
    //    for(ll j=0;j<n;j++){
    //       if(v[j]-1 != j){
    //           ans[j]=v[j];
    //           v.erase(v.begin()+j);
    //           //break;
    //       }


    //    }
       
    // }



   

    //print 

    // for(ll i=1;i<=n;i++){
    //    cout<<ans[i]<<" ";
    // }

    // cout<<endl;

    // 










}

    return 0;
}