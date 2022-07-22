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

    //take input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //check where a[i] > a[i+1] and if a[i]+a[i+1] is odd then  swap 
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if((a[i]+a[i+1])%2==1){
                swap(a[i],a[i+1]);
                break;
            }
        }
    }
    //check array is non-decreasing or not
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=false;
            break;
        }
    }

    //print yes
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


}

    return 0;
}