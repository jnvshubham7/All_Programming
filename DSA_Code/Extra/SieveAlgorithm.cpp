
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

const int n=1e+7;

int main(){

    vector<bool> isPrime(n,true);

    isPrime[0]=isPrime[1]= false;

    for(int i=2;i<n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    int cnt=0;

    for(int i=0;i<100;i++)
    {
        if(isPrime[i])
        {
            cnt++;
            
        }
    }

    cout<<cnt;



    
    


    return 0;
}

