#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    // if(a==b || a==c || a==d || b==c || b==d || c==d)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }

    int max=INT_MIN;

    //find max of a,b,c,d
    if(a>max)
    {
        max=a;
    }
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }


    cout<<max<<endl;

}

    return 0;
}