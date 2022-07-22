#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum=sum+v[i];
        }
        if(sum%n==0){
            cout<<'0'<<endl;
        }
        else{
            cout<<'1'<<endl;
        }


    }
return 0;}
