#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int t; cin>>t;
    while(t--){
       int a,b,c;
         cin>>a>>b>>c;
         if(a+b>c){
             cout<<"TRAIN"<<endl;
         }
         else if (a+b<c){
             cout<<"PLANEBUS"<<endl;
         }
         else{
                cout<<"EQUAL"<<endl;
         }
        
    }
    return 0;
}