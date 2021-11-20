#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2==0){
            int x=n/2;
            cout<<(x*3-x)<<endl;
        }
        else{
            int y=n/2;
            cout<<((y+1)*3-y)<<endl;
        }

      
    }


    return 0;
}