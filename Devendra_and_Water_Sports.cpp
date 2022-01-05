#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int t;
    cin>>t;

    while(t--){

        int m,n,a,b,c;
        cin>>m>>n>>a>>b>>c;

        if((m-n)>=(a+b+c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}