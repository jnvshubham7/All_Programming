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
        ll maxo=0,pos=0;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            if(temp>maxo){
                maxo=temp;
                pos=i+1;
            }
        }
        cout<<pos<<endl;   



   

   

  









    // map<ll,ll> m;

    // for(int i=0;i<n;i++){
    //     m[i+1]=a[i];
    // }

    // for(int i=n-1;i>=0;i--){

    //     if(a[i]%2!=0){

           


    //         break;
           
    //     }
       
    // }




    

    

}

    return 0;
}