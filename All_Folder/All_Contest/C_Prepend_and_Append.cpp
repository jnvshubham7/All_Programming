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

    string s;
    cin>>s;

    int cnt=n;

    int l=0, r=n-1;

    while(l<r)
    {
        if(s[l]!=s[r])
        {
            cnt-=2;
        }
        else if(s[l]==s[r])
        {
            break;
        }

        l++;
        r--;
    }

    cout<<cnt<<endl;


    

}

    return 0;
}