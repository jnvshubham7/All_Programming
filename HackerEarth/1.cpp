#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;

    while(t--){
       int n;
         cin>>n;

        int cnt=0;
        
        while(n==0){
            n=n/2;
            cnt++;
        }
        cout<<cnt<<endl;
        
        



             
         

    }

    return 0;
}