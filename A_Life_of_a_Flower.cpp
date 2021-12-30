#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int t;
    cin>>t;
    while(t--){
        int n,i;
        //define array
        cin>>n;
        int a[n];
        int cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<a[i]<<endl;

        // if(a[i]==0 && a[i+1]==0)
        // {
        //     cout<<"-1"<<endl;
        // }

        // else if(a[i]==1 && a[i+1]==1){
        //     cnt += 5;

        // }

        // else if(a[i]==0 && a[i+1]==1){
        //     cnt++;
        // }

        // else if(a[i]==1 && a[i+1]==0){
        //     cnt++;
        // }

        // cout<<cnt<<endl;

       

        


        

       

        
       
    }

    return 0;
}