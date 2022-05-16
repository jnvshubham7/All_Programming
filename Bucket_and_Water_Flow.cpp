#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a+(c*d))<b)

    {

        cout<<"Unfilled"<<endl;

    }
    else if((a+(c*d))==b)

    {

        cout<<"filled"<<endl;

    }
    else

    {

        cout<<"overFlow"<<endl;

    }


}

    return 0;
}