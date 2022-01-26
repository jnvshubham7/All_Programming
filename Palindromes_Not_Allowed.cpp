#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
int main(){

    int t;
    cin>>t;
    while(t--){
       int n;
         cin>>n;

         string s="abcdefghijklmnopqrstuvwxyz";
         for(int i=0;i<n;i++){
            int d=i%26;
            cout<<s[d];
         }
            cout<<endl;
         }


    return 0;
}