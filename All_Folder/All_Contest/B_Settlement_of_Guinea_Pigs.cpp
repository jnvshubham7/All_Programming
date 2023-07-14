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

    int c1=0,c2=0;
    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            c1=c1+c2;
            c2=0;
            if(c1==0)
            {
                ans=max(ans,0);
            }
            else
            {
                ans=max(ans,(c1+2)/2);
            }
           
        }
        else {
            c2++;

            ans=max(ans,(c1+1)/2+c2);
        }
    
    }


    cout<<ans<<endl;

     

}

    return 0;
}