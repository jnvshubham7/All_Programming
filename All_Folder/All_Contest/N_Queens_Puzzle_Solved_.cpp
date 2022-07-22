#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    //(0.143*n)^n 
    double ans=pow(0.143*n,n);
   // cout<<ans<<endl;
//     Print ⌊x⌋ if x−⌊x⌋<0.5
// Otherwise, print ⌊x⌋+1
    // ll ans1=floor(ans);
    // ll ans2=ceil(ans);
    // if(ans-ans1<0.5){
    // cout<<ans1<<endl;
    // }
    // else{
    // cout<<ans1+1<<endl;
    // }
    //rounding off the answer to nearest integer
    ll ans1=round(ans);
    cout<<ans1<<endl;
    
    


    
  


  

}

    return 0;
}