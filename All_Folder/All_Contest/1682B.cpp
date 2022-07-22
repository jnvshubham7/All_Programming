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


//     You are given a permutation p of integers from 0 to n−1 (each of them occurs exactly once). Initially, the permutation is not sorted (that is, pi>pi+1 for at least one 1≤i≤n−1

// ).

// The permutation is called X
// -sortable for some non-negative integer X

// if it is possible to sort the permutation by performing the operation below some finite number of times:

//     Choose two indices i

// and j (1≤i<j≤n) such that pi&pj=X
// .
// Swap pi
// and pj

//     . 

// Here &

// denotes the bitwise AND operation.

// Find the maximum value of X
// such that p is X-sortable. It can be shown that there always exists some value of X such that p is X-sortable.




for(int i=n-1;i>=0;i--){
    if(a[i]<a[i-1]){
        cout<<a[i]<<endl;
        break;
    }
}
































}

    return 0;
}