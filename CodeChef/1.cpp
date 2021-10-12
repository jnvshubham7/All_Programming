#include<bits/stdc++.h>
using namespace std;
#include<string>
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
         int x=0, y=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        //cout<<s<<endl;
        for(int i=0;i<s.length();i++){
           
            if(s[i]==48){
                x++;

            }
           
                if(s[i]==49){
                    y++;
                }

            
           
        }
        // cout<<x<<" "<<y<<endl;

        cout<<(a*x+b*y)<<endl;

    }

    return 0;
}