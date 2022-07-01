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

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll b[n];
        fr(i,n){
            cin>>b[i];
        }
        ll sum=0;
        fr(i,n){
            sum+=b[i];
        }

        ll total=sum/(n+1);

        ll a[n];
        fr(i,n){
            a[i]=b[i]-total;
        }

        //print 
        fr(i,n){
            cout<<a[i]<<" ";
        }
        cout<<endl;


    }





    return 0;
}