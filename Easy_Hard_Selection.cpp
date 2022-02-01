#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int arr[n];

    //scan array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //check 1 is present in the array
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

}

    return 0;
}