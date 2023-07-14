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

    ll n;
    cin>>n;

    string s;
    cin>>s;


    //convert all to lowercase

    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }


  

    string s1;

    //ALL repeated characters are removed

    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            continue;
           
        }

        else{
           s1+=s[i];
        }

    }




    // if(s[0]=='m')
    // {
    //     s1.pb('m');
    // }

    // for(int i=1;i<n;i++)
    // {
    //     if(s[i]==s[i-1])
    //     {
    //         continue;
    //     }

    //     else{
    //         s1.pb(s[i]);
    //     }
    // }


   //cout<<s1<<endl;


    if(s1=="meow")
    {
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

}

    return 0;
}