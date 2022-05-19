#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;

    int A;
    int B;



    A=500-(a*2);
    B=1000-((a+b)*4);


    int x;
    int y;

     y=500-((a+b)*2);
    x=1000-((b)*4);

    cout<<max((A+B),(x+y))<<endl;



}

    return 0;
}