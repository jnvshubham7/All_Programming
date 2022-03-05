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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //The MEX of an array is equal to the smallest positive integer that is not present in the array
    // int mex=1;
    // bool flag=false;
    // while(!flag){
    //     flag=true;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==mex){
    //             flag=false;
    //             mex++;
    //             break;
    //         }
    //     }
    // }
    // cout<<mex<<endl;

    //find how many subsets of arr[i] can be formed which mex is same
    int count=0;
    for(int i=0;i<n;i++){
        int mex=arr[i];
        bool flag=false;
        while(!flag){
            flag=true;
            for(int j=0;j<n;j++){
                if(arr[j]==mex){
                    flag=false;
                    mex++;
                    break;
                }
            }
        }
        count++;
    }
    cout<<count/2<<endl;



    //store all possible subarray in vector which minimum posstive number is not present in array
    // vector<int> v;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         if(sum>0){
    //             v.push_back(sum);
    //         }
    //     }
    // }


    //The mex of each of the selected subarray is the same. 
    //find how many subarrays are there
    // int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         if(sum==0){
    //             count++;
    //         }




}

    return 0;
}