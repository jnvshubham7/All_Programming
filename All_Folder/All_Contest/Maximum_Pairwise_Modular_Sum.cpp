#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,m;
    cin>>n>>m;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //if n=2 then 2*2=4 possible ways we can select 2 elements 
    //like as a[1],a[2]
    //a[2],a[1]
    //a[1],a[1]
    //a[2],a[2]
    //so we can select 2 elements and perform the operation


    //we can select 2 elements and put at Ai&Aj position

//a[i]+a[j]+((a[i]-a[j])mod m).














}

    return 0;
}