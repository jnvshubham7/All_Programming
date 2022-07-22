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

void solve(string s)
{
    int n=s.size();

    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
           for(int j=i+2;j<n;j++)
           {
               if(s[j]=='B' && s[j+1]=='A')
               {
                   cout<<"YES"<<endl;
                   return;
               }
           }
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
           for(int j=i+2;j<n;j++)
           {
               if(s[j]=='A' && s[j+1]=='B')
               {
                   cout<<"YES"<<endl;
                   return;
               }
           }
        }
    }

    cout<<"NO"<<endl;



}

int main(){
    
    string s;
    cin>>s;

    solve(s);

    






    return 0;
}