#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll n,k;
cin>>n>>k;

ll arr[n];

for(ll i=0;i<n;i++){
    cin>>arr[i];
}


// We have an integer sequence of length N: A=(A1​,A2​,⋯,AN​). Below in this problem, let the score of A be the sum of the first K terms of A. Additionally, let s be the score of the sequence

// A given in input.

// You can do the following operation any number of times.

//     Choose two adjacent elements of 

//     A and swap them.

// Your objective is to make the score at least
// s+1. Determine whether the objective is achievable. If it is, find the minimum number of operations needed to achieve it.





























//0  to k-1 element add

// ll sum=0;

// for(ll i=0;i<k;i++){
//     sum+=arr[i];
// }

// ll sum1=sum+1;

//sum1- k-1th element

//sum1-k-1th element

//decrement k-1th element from sum1

// for(ll i=0;i<k;i++){
//     if(i==k-1){
//         sum1-=arr[i];
//         break;
//     }
// }
int flag=0;

int pos1=0;
int pos2=0;

for(ll i=k-1;i>0;i--){
    //decrement 1 in every element then check is match  to any elment after kth element 
        for(ll j=k;j<n;j++){
            if(arr[j]==(arr[i]+1)){
                flag=1;
                //store pos of that element
                pos1=i;
                pos2=j;
                break;
            }
        }
        if(flag==1){
            break;
        }
}

//cout<<(pos2-pos1)<<endl;
cout<<pos1<<" "<<pos2<<endl;






   








    return 0;
}