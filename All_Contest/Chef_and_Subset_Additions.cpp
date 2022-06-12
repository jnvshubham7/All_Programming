#include<bits/stdc++.h>
using namespace std;
// ll defin
#define ll long long

#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int b[n];

        //take input
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }


//print a[n] and b[n]
    
    //p





        //
       
































        // check all elemnet in a[] and b[] are equal or not
        // if yes then print YES

        // int flag=0;
        // for(int i=0;i<n;i++){
        //     if(a[i]!=b[i]){
        //         flag=1;
        //         break;
        //     }
        // }

        // if(flag==0){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }



        //check all elemnet in a[] and b[] are equal or not
        //if yes then print YES


        //check a[i]+x is equal to b[i] or not
        //if yes then count++
       // int count=0;
       int count = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] + x == b[i]  || a[i] + y == b[i]) {
        count++;
      }
    }

//cout<<count<<endl;

        //check a[i]+y is equal to b[i] or not

        // if(count!=n)
        // {
        //     for(int i=0;i<n;i++){
        //     if(a[i]+y==b[i]){
        //         count++;
        //     }
        // }
       // }

        //cout<<count<<endl;

        //check count is equal to n or not
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}