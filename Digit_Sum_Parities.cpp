#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    
    cin>>n;
    int ans=n;

    //add each digit of n
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }

  //  cout<<sum<<endl;

    //if sum is even, then ans is odd
    //if sum is odd, then ans is even

    if(sum%2==0){
        int n1=ans+1;
        int ans1=n1;
       // cout<<n1<<endl;
        int sum1=0;
        while(n1>0){
            sum1+=n1%10;
            n1/=10;
        }
        // cout<<sum1<<endl;
        if(sum1%2==0){
           
           cout<<ans1+1<<endl;
        }
        else{
            cout<<ans1<<endl;
        }
       
    }
    else{
        int n1=ans+1;
        int ans1=n1;
        int sum1=0;
        while(n1>0){
            sum1+=n1%10;
            n1/=10;
        }
        if(sum1%2==0){
            cout<<ans1<<endl;
        }
        else{
            cout<<ans1+1<<endl;
        }
      
       
       
    }



}

    return 0;
}