#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
 // fileio;

 int t;
 cin>>t;
 int a,b,c;
 while(t--){

   cin>>a>>b>>c;
   if((b+c)%2==0)
     cout<<"0"<<endl;
   
   else
     cout<<"1"<<endl;
   


 }

  

  return 0;
}