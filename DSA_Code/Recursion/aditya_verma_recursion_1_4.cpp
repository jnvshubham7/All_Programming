#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }else{
        print(n-1);
        cout<<n<<" ";
    }
}

void reversePrint(int n){
    if(n==0){
        return;
    }else{
        cout<<n<<" ";
        reversePrint(n-1);
    }
}

int factorial(int n){
    if(n==0) return 1;

    int ans=n*factorial(n-1);
    return ans;
}

int main(){
    int n=10;
    print(n);
    cout<<"\n";
    reversePrint(n);
    cout<<"\n";
    cout<<factorial(n);
    return 0;
}