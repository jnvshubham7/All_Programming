#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n,k;
cin>>n>>k;
 
 int arr[n];

 //take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //check arr[i] element is >=k or not
    //if yes then print i 

    for(int i=0;i<n;i++){
        if(arr[i]>k){
           // cout<<i<<endl;
            i++;
            continue;
           
            
        }

        else{
            //print i
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}