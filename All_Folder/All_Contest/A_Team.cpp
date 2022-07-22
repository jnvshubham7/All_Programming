#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int count=0;

int t;
cin>>t;
while(t--){

    int a,b,c;
    cin>>a>>b>>c;
   
    if(a==1 && b==1 || a==1 && c==1 || b==1 && c==1){
        count++;
    }

}

cout<<count<<endl;

    return 0;
}