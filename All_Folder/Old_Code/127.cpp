#include<bits/stdc++.h>
using namespace std;


int main(){
        #ifndef ONLINE_JUDGE

      freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif



    int t;
    cin>>t;
    
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int a=0, b=0;
        if(a1>=b1){
            a++;
        }
        else{
            b++;
        }

        cout<<a<<b;


    }
    



    return 0;
}