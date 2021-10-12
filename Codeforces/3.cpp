#include<bits/stdc++.h>
using namespace std;
#include<string>
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        char L,R,U,D;

        for(int i=0;i<n;i++){
           if(str[i]=='U'){
                str[i]='D';
           }
           else if(str[i]=='D'){
            str[i]='U';
           }
        }
    cout<<str<<endl;


      }
    }