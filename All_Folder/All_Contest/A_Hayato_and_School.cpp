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

    int a[n];

    fr(i,n)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            if(!(a[i]+a[j]+a[k])%2)
            {
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                break;
            }
            else if((a[i]+a[j]+a[k])%2)
            {
                j++;
                k--;
            }
        }
    }


}

    return 0;
}