#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=a-b;
        cout<<min(c,b)<<endl;
    }
    




    return 0;
}