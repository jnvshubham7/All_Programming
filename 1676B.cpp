#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //if all elements are same then return 0
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            flag=1;
            break;
        }
    }


    //find minimum element in array
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }


    //subtract min from all elements
    for(int i=0;i<n;i++){
        a[i]-=min;
    }

    //add all elements
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    if(flag==0)
    {
        cout<<"0"<<endl;
    }

    else {
        cout<<sum<<endl;
    }



}

    return 0;
}