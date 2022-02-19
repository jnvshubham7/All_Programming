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
    //sort array
    sort(a,a+n);
   
  // find if we can partition the given array into two subsets such that the sum of elements in both subsets is equal
    // if yes then print true else print false
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2==0){
        int sum1=sum/2;
        int sum2=sum1;
        int i=0;
        int j=n-1;
        while(sum1>0 && sum2>0){
            if(sum1>=a[i]){
                sum1-=a[i];
                i++;
            }
            if(sum2>=a[j]){
                sum2-=a[j];
                j--;
            }
        }
        if(sum1==0 && sum2==0){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    else{
        cout<<"false"<<endl;
    }
}


    return 0;
}