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

    int n,m;
    cin>>n>>m;

    string a,b;
    cin>>a>>b;

    reverse(all(b));
    a+=b;

        int cnt = 0;
    for(int i = 1; i < n+m; i++){
        if(a[i] == a[i-1]) cnt++;
    }


    if(cnt>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    

}

    return 0;
}