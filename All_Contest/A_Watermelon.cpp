#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){



    int n;
    cin>>n;
    //divide the number by 2

    // if(n<4){
    //     cout<<"NO"<<endl;
    // }
   
    if(n%2==0 && n>=4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}