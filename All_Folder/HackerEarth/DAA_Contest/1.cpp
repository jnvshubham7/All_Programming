#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

  int n,x;
  cin>>n>>x;
  //take input n*n matrix
  int a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  

  //find x in matrix and cout position of x
  int flag=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j]==x){
        cout<<i<<" "<<j<<endl;
        flag=1;
        break;
      }
    }
    if(flag==1)
      break;
  }
  //if x is not found in matrix then return -1,-1
  if(flag==0){
    cout<<"-1 -1"<<endl;
  }


 


}

  return 0;
}