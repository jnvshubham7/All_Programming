#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b){
            cout<<"PIZZA"<<endl;
        }
        else if(a>=c){
            cout<<"BURGER"<<endl;
        }
        else{
            cout<<"NOTHING"<<endl;
        }
    }

    return 0;
}