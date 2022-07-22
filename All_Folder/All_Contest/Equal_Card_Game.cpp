#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=abs(52%n);
        cout<<ans<<endl;
    }

    return 0;
}