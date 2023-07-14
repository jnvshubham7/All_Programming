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

            string s;
        cin>>s;
        char mini='9';
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]<=mini) mini=s[i];
            else{
                s[i]=min((char)(s[i]+1),(char)'9');
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;



    

}

    return 0;
}