#include<bits/stdc++.h>
using namespace std;
#define ll long long




ll lis(ll arr[],ll n){
    ll dp[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        ll maxi=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]>maxi){
                maxi=dp[j];
            }
        }
        dp[i]=maxi+1;
    }
    ll maxi=0;
    for(int i=0;i<n;i++){
        if(dp[i]>maxi){
            maxi=dp[i];
        }
    }
    return maxi;
}

int main(){

int t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //new array reverse of a
    ll b[n];


    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }


    //find lis of a and b and find the min of lis
    //lis - longest increasing subsequence


    cout<<min(lis(a,n),lis(b,n))<<endl;

    // ll lis[n];
    // ll lis_b[n];

    // for(int i=0;i<n;i++){
    //     lis[i]=1;
    //     lis_b[i]=1;
    // }



}

    return 0;
}