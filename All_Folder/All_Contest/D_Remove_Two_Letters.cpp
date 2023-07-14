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

    // ll n;
    // cin>>n;

    // string s;
    // cin>>s;

    // set<string>st;

    // //erase 2 letters consecutively and store in set

    // for(int i=0;i<n-1;i++){
    //     string temp=s;
    //     temp.erase(i,2);
    //     st.insert(temp);
    // }


    // cout<<st.size()<<endl;
    

        int n; cin >> n;
    string s; cin >> s;
 
    // int ans = 1;
    // for(int i=2; i<n; i++){
    //     if(s[i] != s[i-2]) ans++;
    // }

       int ans=n-1;
    for(int i=2;i<n;i++)
    {
        if(s[i]==s[i-2])ans--;
    }

    cout << ans << endl;

}

    return 0;
}