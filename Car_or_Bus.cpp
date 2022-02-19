#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;
//     BIKE
// CAR
// SAME

//if(a==b) then same if a>b then car else bike

    if(a==b){
        cout<<"SAME"<<endl;
    }
    else if(a>b){
        cout<<"CAR"<<endl;
    }
    else{
        cout<<"BIKE"<<endl;
    }

}



    return 0;
}