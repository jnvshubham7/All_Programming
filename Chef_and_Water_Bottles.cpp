#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int a,b,c;
    cin>>a>>b>>c;

    if(b>c){
        cout<<"0"<<endl;
    }
    else if((c/b)>a){
        cout<<a<<endl;
    }
    else{
        cout<<(c/b)<<endl;
    }

}

    return 0;
}