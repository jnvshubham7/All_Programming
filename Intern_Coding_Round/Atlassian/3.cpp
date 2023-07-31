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

    int t;
    cin>>t;

    while(t--){

       

    

    ll n;
    cin>>n;

    ll a[n];

    fr(i,n){
        cin>>a[i];
    }
    ll k;
    cin>>k;

    map<ll,ll> m;

    fr(i,n){
        m[a[i]]++;
    }
    set<pair<int,int>> st;
    if(k==0)
    {
        for(auto it : m)
        {
            if(it.second>1)
            {
                st.insert({it.first,it.first});
            }
        }
        cout<<st.size()<<endl;
        continue;
    }
    else
    {
        for(auto it : m)
        {
            if(m.find(it.first+k)!=m.end())
            {
                //cout<<it.first<<" "<<it.first+k<<endl;
                st.insert({it.first,it.first+k});
                // m[it.first+k]--;
                // if(m[it.first+k]==0)
                // {
                //     m.erase(it.first+k);
                // }
            }
        }
        cout<<st.size()<<endl;
    }

    }
}