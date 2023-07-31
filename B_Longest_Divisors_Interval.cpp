#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
      

    long long int maxi=0;
    
    long long int cnt=0;
    
        for(int i=1;i<=100;i++){
            if(n%i==0){
                cnt++;
            }
            else{
                cnt=0;
            }
        maxi=max(maxi,cnt);
        
        }
        cout<<maxi<<endl;


    }
    
    return 0;
}