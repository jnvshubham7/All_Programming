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

    // int n;
    // cin>>n;

    // string s;

    // vector<string> v;

    // for(int i=0;i<(2*n-2);i++)
    // {
    //     cin>>s;
    //     if(s.length()==n-1)
    //     {
    //         v.pb(s);
    //     }
    // }

    // reverse(all(v[1]));

    // if(v[0]==v[1])
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }


    	int n;
	vector<string> a;
	cin>>n;
	for(int i=1; i<=2*n-2; i++)
	{
		string s;
		cin>>s;
		if(s.size()==n/2)
		{
			a.push_back(s);
		}
	}

    reverse(a[1].begin(), a[1].end());

    if(a[0]==a[1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    





}

    return 0;
}