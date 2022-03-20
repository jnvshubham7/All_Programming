#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    //if(n>10) then n-=10; count++
    //if(n>5) then n-=5; count++

    int count=0;
    while(n>=10){
        n-=10;
        count++;
    }
    while(n>=5){
        n-=5;
        count++;
    }

    if(n==0) cout<<count<<endl;
    else cout<<-1<<endl;


    //first divide by 10 until it is greater than 10 after that divide by 5 
    //check n is ==0
    //count++

    // bool flag=false;

    // int count=0;
    // while(n>0){
    //     if(n%10==0){
    //         count+=n/10;
    //         n=n/10;
    //         break;
    //     }
    //     else if(n%5==0){
    //         count+=n/5;
    //         n=n/5;
    //         break;
    //     }
    //     else{
    //         flag=true;
    //         break;

    //     }
    // }
    // if(flag){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<count<<endl;
    // }

    // int ans=0;
    // while(n>0){
    //     if(n>=10){
    //         ans+=n/10;
    //         n=n%10;
    //     }
    //     else if(n>=5){
    //         ans+=n/5;
    //         n=n%5;
    //     }
    //     else{
    //         ans+=n;
    //         n=0;
    //     }
    // }
    // cout<<ans<<endl;


    // int ans=0;
    // while(n>=10){
    //     ans++;
    //     n=n/10;
    // }
    // if(n>=5){
    //     ans++;
    // }
    // cout<<ans<<endl;

    //

}

    return 0;
}