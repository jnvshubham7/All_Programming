#include<bits/stdc++.h>
using namespace std;
#define ll long long

//modulo function
// ll mod(ll a,ll b){
//     return (a%b+b)%b;
// }


int main(){

int t;
cin>>t;
while(t--){

    ll l,r,a;
    cin>>l>>r>>a;


    vector<ll> v;

    ll ans;
    ll modulo;

    ll maxi=0;
    ll maxMod=0;


    for(ll i=l;i<=r;i++){
        modulo=(i%a+a)%a;
        if(modulo>maxMod){
            maxMod=modulo;
            maxi=i;
        }

        //


        // ans=((i/a)+(i%a+a)%a);
        // if(ans>maxi){
        //     maxi=ans;
        // }
        
        //push
        //
        //max element store in vector


       // v.push_back(ans);
       
       
    }

    cout<<maxi<<endl;
     //cout<<ans<<endl;

     //print vector
        // for(ll i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }

        //print max element from vector

    //    ll max=v[0];
    //      for(ll i=0;i<v.size();i++){
    //           if(v[i]>max){
    //             max=v[i];
    //           }
    //      }
    //         cout<<max<<endl;


       

      //  cout<<endl;

}

    return 0;
}