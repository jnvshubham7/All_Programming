#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //reverse(a,a+n);
    reverse(a,a+n);

    int cn=0;

    //check how many continuous 0 in the array from starting

    if(a[0]!=0)
    {

        cout<<n-1<<endl;
       
    }

    else {

         for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cn++;
        }
        else
        {
            break;
        }
    }

    cout<<n-cn-1<<endl;

    }
   



}

    return 0;
}