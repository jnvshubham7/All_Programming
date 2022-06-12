#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
   //check from last to first where small element found then break comapre to x
    for(int i=n-1;i>=0;i--){
        if(arr[i]<x){
           
            break;
        }

         count++;
    }

    cout<<(n-count)<<endl;

   
   

}

    return 0;
}