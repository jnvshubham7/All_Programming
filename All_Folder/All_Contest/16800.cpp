#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int flag=0;
    int flag1=0;

    if(l1>=l2 && l1<=r2){
        flag=1;

        cout<<l1<<endl;

    }

    else if(l2>=l1 && l2<=r1){
        flag1=1;
        cout<<l2<<endl;
    }

    else{
        cout<<(l1+l2)<<endl;
    }


     



    

}

    return 0;
}