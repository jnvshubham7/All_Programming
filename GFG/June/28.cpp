

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
    





class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {


        long long sum=0;
        sort(A,A+N);
       for(int i=0;i<N;i++)
         {
             cout<<A[i]<<" ";
            }
        cout<<endl;

        for(int i=K1;i<K2-1;i++)
        {
            sum+=A[i];
        }
         return sum;
        // Your code goes here
    }
};






int main(){
Solution s;

    ll n;
    cin>>n;
    ll A[n];
    fr(i,n)
    {
        cin>>A[i];
    }

    ll K1,K2;
    cin>>K1>>K2;
    cout<<s.sumBetweenTwoKth(A,n,K1,K2)<<endl;




    return 0;
}