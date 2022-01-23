#include<bits/stdc++.h>
using namespace std;

#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];

    }
    sort(b, b+n);
     for(int i=0;i<n;i++)
    {
       // cout<<a[i]<<" "<<b[i]<<endl;

    }
    

    int count=0;
    for(int i=0;i<n;i++)
    {
       // for(int j=0;j<n;j++)
        a[i]=2*a[i];
       // i++;
       
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" "<<b[i]<<endl;
       
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                count++;
               // break;
            }
        }
    }
    cout<<count;

    //decreising loop
    // for(int i=n-1;i>=0;i--){
    //     for(int j=0;j<n;j++){






    return 0;
}