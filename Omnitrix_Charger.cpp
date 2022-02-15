#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,x;
    cin>>n>>x;
    ll a[n];
    //taking input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sorting
    sort(a,a+n);

    //check x is in the array
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

     //if present then find position
   
    int pos=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            pos=i;
            break;
        }
    }
    //if x is not present then find the position of the closest number
    if(pos==0){
        pos=1;
    }
    else if(pos==n-1){
        pos=n-2;
    }
    else{
        if(x-a[pos-1]<a[pos+1]-x){
            pos=pos-1;
        }
        else{
            pos=pos+1;
        }
    }

    //printing the position
    cout<<pos+2<<endl;

    //if x is not present then find the position of the closest number
    //if x is not present then find the position of the closest number
    //if present then find position
    //if not present then find position




}

    return 0;
}