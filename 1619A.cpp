#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int as=0;
        int bs=0;
        int cs=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                as++;
            }
            else if(s[i]=='b'){
                bs++;
            }
            else{
                cs++;
            }
        }

        
       
        
        
       
    }

    return 0;
}