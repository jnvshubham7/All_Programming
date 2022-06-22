#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
     
        
        for(int i=a;i<=b;i++){
           
         
            if ((i%2==0 || i%3==0 || i%5==0 || i%7==0 || i==0 || i==1) ){
                if (i==2 || i==3 || i==5 || i==7){
                    cout<<i<<endl;
                }
               
            }
            else {
                cout<<i<<endl;
            }

            
        }
    }

    return 0;
}