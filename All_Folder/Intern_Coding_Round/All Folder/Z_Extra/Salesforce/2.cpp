//https://leetcode.com/discuss/interview-question/2343740/Salesforce-or-OA-or-27-July
//  You're given an array of N (1<=N<=1e5) integers. Find the longest zig zag sequence present in the array. 
//A Zig Zag sequence is defined as sequence where each element is either strictly greater or smaller than 
//it's adjacent elements and the parity of each adjacent element in the sequence must be different. 
//Note that corner elements can also form the zig zag sequence.


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

    ll n;
    cin>>n;
    vi a(n);
    fr(i,n)
        cin>>a[i];
    ll ans=0;
    ll cur=0;
    ll flag=0;
    fr(i,n){
        if(flag==0){
            if(a[i]>a[i-1]){
                cur++;
            }
            else{
                cur--;
                flag=1;
            }
        }
        else{
            if(a[i]<a[i-1]){
                cur++;
            }
            else{
                cur--;
                flag=0;
            }
        }
        ans=max(ans,cur);
    }
    cout<<ans<<endl;


}

    return 0;
}