#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int m,n,k;
    cin>>m>>n>>k;
    if(m==1 && n==1 && k==0){
        cout<<"YES"<<endl;
    }

      int x,y;

     //if we increase x by 1 then k will be decreased by y
        //if we increase y by 1 then k will be decreased by x
        //until x==m and y==n or k==0



    while(k>=0){
    for( x=1;x<=m;x++){
        for(y=1;y<=n;y++){
            if(x==m && y==n){
                if(k==0){
                    cout<<"YES"<<endl;
                    return 0;
                }
                else{
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else if(x==m){
                k=k-y;
            }
            else if(y==n){
                k=k-x;
            }
            else{
                continue;
            }
        }
        x++;
        k=k-y;
        // if(k<0){
        //     break;
        // }

    }
    for( y=1;y<=n;y++){
        for(x=1;x<=m;x++){
            if(x==m && y==n){
                if(k==0){
                    cout<<"YES"<<endl;
                    return 0;
                }
                else{
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else if(x==m){
                k=k-y;
            }
            else if(y==n){
                k=k-x;
            }
            else{
                continue;
            }
        }
        y++;
        k=k-x;
        // if(k<0){
        //     break;
        // }
    }


    }

    if(k==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





  
   // int flag=0;

    //while(k>=0){
        //if we increase x by 1 then k will be decreased by y
        //if we increase y by 1 then k will be decreased by x
        //until x==m and y==n or k==0
        // if(x==m && y==n){
        //     cout<<"YES"<<endl;
        //     break;
        // }
        // else if(k==0){
        //     cout<<"NO"<<endl;
        //     break;
        // }
        // else if(x==m){
        //     y++;
        //     k=k-y;
        // }
        // else if(y==n){
        //     x++;
        //     k=k-x;
        // }
        // else{
        //     x++;
        //     y++;
        //     k=k-x-y;
        // }




        // if(k>=y){
        //     k=k-y;
        //     x++;
        // }
        // else if(k>=x){
        //     k=k-x;
        //     y++;
        // }
        // else{
        //     break;
        // }
  //  }
    // if(k==0){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

}

    return 0;
}