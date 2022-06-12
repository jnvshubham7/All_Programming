#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n;
cin>>n;
// For a positive integer x between 1 and 9, the positive integers at most x with the same number of digits as x are 1,2,…,x.

//     Thus, we have 

//     f(1)=1,f(2)=2,...,f(9)=9.

// For a positive integer
// x between 10 and 16, the positive integers at most x with the same number of digits as x are 10,11,…,x.

//     Thus, we have 

// f(10)=1,f(11)=2,...,f(16)=7.
//find sum of f(i) for i between 1 and n
int sum=0;
for(int i=1;i<=n;i++){
    if(i<10){
        sum+=i;
    }
    else if(i<=16){
        sum+=i-9;
    }
    else{
        sum+=i-16+9;
    }
}
cout<<sum<<endl;


    return 0;
}