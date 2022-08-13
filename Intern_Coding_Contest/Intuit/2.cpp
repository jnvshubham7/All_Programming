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

  int n; cin>>n;
  map<pair<string,string>, int> m;

  while(n--)
  {
    string s1,s2; cin>>s1>>s2;
    m[{s1,s2}]++;
  }

  int cnt=0;
 
 int q; cin>>q;

  while(q--)
  {
    string s1,s2; cin>>s1>>s2;
   if(m[{s1,s2}]>0)
   {
    m[{s1,s2}]--;
   }

   else {
    cnt++;
   }


  }

  cout<<cnt<<endl;
  



    return 0;
}