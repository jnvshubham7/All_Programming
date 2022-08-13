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


int n; cin >> n;

    vector<char> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    char target; cin >> target;

    vector<int> indexes;

    for(int i=0; i<n; i++)
    {
        if(v[i] == target){
            indexes.pb(i + 1);
        }
    }

    int mid = indexes.size()/2;
    int ans = 0;

    for(int i= mid -1; i >=0 ; i--)
    {
        int t = indexes[i + 1]-1 ;  // t = 3;

        ans += t - indexes[i];
        indexes[i] = t;
    }

    for(int i= mid + 1; i<indexes.size(); i++)
    {
        int t = indexes[i-1] + 1; 

        ans += indexes[i] - t;
        indexes[i] = t;
    }

    cout << ans;


    return 0;
}