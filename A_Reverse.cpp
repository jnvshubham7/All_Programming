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

  //check where a[i] > a[i+1] and swap
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            //break;
        }
    }
    //print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

    return 0;
}