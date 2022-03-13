#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    string s;
    cin>>s;
    int n=s.length();

    char c;
    cin>>c;

    //check if c is present in middle of s or not

   // int m=n/2+1;

    //check char c is present in odd position or not
    int flag=0;

    for(int i=0;i<n;i++){
        if(s[i]==c){
            if(i%2==0){
                flag=1;
                break;
            }
        }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  

    //print c and m
   // cout<<c<<" "<<m<<endl;
    //check char c is present in mth position or not

    //check 
    // if(s[m-1]==c){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
    
    // int flag=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]==c){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }


}

    return 0;
}