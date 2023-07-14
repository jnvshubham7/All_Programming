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
	    cin >> n;
	    int a[n], b[n];
	    for(int i=0; i<n; i++)
	    cin >> a[i];
	    for(int i=0; i<n; i++)
	    cin >> b[i];
	    map<int,int> mp;
	    for(int i=0; i<n; i++)
	    {
	        mp[a[i]]++;
	        mp[b[i]]++;
	    }

        //print the map

        // for(auto x: mp)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }



	    int mx=0;
	    for(auto x: mp)
	    {
	        mx = max(mx, x.second);
	    }
	    cout << mx << endl;


    

}

    return 0;
}