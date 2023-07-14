#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

int main(){
ll t;
cin>>t;
while(t--){

    int n;
    cin>>n;


    int a[n];
    fr(i,n)
    {
        cin>>a[i];
    }

    int cnt1=0,cnt2=0;

    fr(i,n)
    {
       if(a[i]>0)
       {
           cnt1++;
       }
       else
       {
           cnt2++;
       }
    }


    for(int i=1;i<=cnt1;i++)
    {
        cout<<i<<" ";
    }

    for(int i=cnt1-1;i>=cnt1-cnt2;i--)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i=0;i<cnt2;i++)
    {
        cout<<1<<" "<<0<<" ";
    }

    for(int i=1;i<=cnt1-cnt2;i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;





    
    






}

    return 0;
}