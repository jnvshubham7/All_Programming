#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    string s[n];
    int count=0;




    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<n;i++)
    {
if(s[i]=="START38")
{
    count++;
}
   
    }

    cout<<count<<" "<<(n-count)<<endl;



}

    return 0;
}