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

int count=0;
    for(int i=0;i<n;i++)
    {
if(a[i]>=1000)
        {
            count++;
        }

    }
    cout<<count<<endl;

}

    return 0;
}