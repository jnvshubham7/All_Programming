#include <bits/stdc++.h>

using namespace std;

int main() {
    
    
    int n,b,s,g;
    int count=0;
    cin>>n>>b>>s>>g;
    int sum=b*1+s*3+g*5;
    if(sum>n){
        cout<<"0";
        
    }
    else if(n>sum){
        int ans=n-sum;
        
        ans=ans/5;
        count++;

        cout<<count;
        
    }
    
    
    return 0;
}