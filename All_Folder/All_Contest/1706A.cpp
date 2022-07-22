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

    ll n,m;
    cin>>n>>m;
   ll a[n];
    fr(i,n){
         cin>>a[i];
    }

    string s="";
    for(int i=0;i<m;i++){
        //put B
        s+="B";

    }

    //print b with index
    // for(int i=0;i<m;i++)
    // {
    //     cout<<s[i]<<" "<<i<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<n;i++){

        int min_index=min((a[i]-1),m-a[i]);
        int max_index=max((a[i]-1),m-a[i]);

       // cout<<min_index<<" ";

        if(s[min_index]=='B'){
            s[min_index]='A';
        }
      else if(s[max_index]=='B'){
            s[max_index]='A';
        }
       else {
        s[min_index]='A';
       }

    }

    //cout<<endl;

       
       

    // }

    cout<<s<<endl;

   

   


}

    return 0;
}