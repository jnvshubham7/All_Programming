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

    ll r,c;
    cin>>r>>c;

    //cout<<r/2<< " " <<c/2<<endl;

    if(r==3 && c==3)
    {
        cout<<2<<" "<<2<<endl;
    }

        else    if(r==2 && c==3)
        {
            cout<<1<<" "<<2<<endl;
            continue;
        }
       else if(r==3 && c==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;
        }
    // else if(r>=2 && c>=2){
    //     cout<<r/2<<" "<<c/2<<endl;
    // }

    //  else if( c>=2){
    //     cout<<r<<" "<<c/2<<endl;
    // }

    //  else if(r>=2){
    //     cout<<r/2<<" "<<c<<endl;
    // }

    else {
        cout<<r<<" "<<c<<endl;
    }



}

    return 0;
}