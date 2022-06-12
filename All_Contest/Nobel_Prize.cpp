#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    //fileio;

    int t;
    cin>>t;
    while(t--){

        int n,m,i,j;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

int cnt=0;
  
    for(i=0;i<n;i++){
      if(a[i]==a[i+1]){
       cnt++;
       
      }
  
    }


   if(cnt==0){
    cout<<"No"<<endl;
   }
   else{
    cout<<"Yes"<<endl;
   }
    


    }





    return 0;
}