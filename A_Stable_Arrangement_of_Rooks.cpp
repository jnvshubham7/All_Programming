#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    ll n,k;cin>>n>>k;
    ll d=(n+1)/2;
    if(k>d){

        cout<<-1<<endl;
        return;
    }

    ll curri=1,currj=1;
    ll req=k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==curri && j==currj && req>0){

                cout<<"R";
                curri+=2;
                currj+=2;
                req--;

            }

            else cout<<".";

        }

        cout<<endl;
    }





}
   
int   main() {

int t=1;cin>>t;

while(t--){
    solve();

}

return 0;

}

