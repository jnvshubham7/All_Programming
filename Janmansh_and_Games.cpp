#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;

    //if a and b are both even or both odd then print YES
    if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)){
        cout<<"Janmansh"<<endl;
    }
    else{
        cout<<"Jay"<<endl;
    }


}

    return 0;
}