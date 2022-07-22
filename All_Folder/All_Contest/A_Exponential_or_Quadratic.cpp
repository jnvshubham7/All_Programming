#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n;
cin>>n;
//2^n >n^2 print yes

if(pow(2,n)>pow(n,2)){
    cout<<"Yes"<<endl;
}
else{

    cout<<"No"<<endl;
}



    return 0;
}