//https://leetcode.com/discuss/interview-question/2344174/Adobe-OA
// Aman gives Omesh a string of length N and asks the number of distinct permutations of S
// such that the count of all palindromic substrings does not exceed N

// Input format:
// First Line indicates T: test cases
// Following T lines gives string S

// Output:
// for each test case print a single line denoting the number of ways to rearrange S in given conditions

// Constraints:
// T<=10^4
// N<=10^5

// Examples
// given 22011

// ans = 2
// two satisfying strings are 12012 and 21021

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
    ll n=s.length();
   
   unordered_map<char,int> m;
    fr(i,n)
    {
         
         {
              m[s[i]]++;
         }
    }

    unordered_map<int,int> m1;

    //m.second in m1
    for(auto i:m)
    {
        m1[i.second]++;
    }

    //sort m1
    vector<int> v;
    for(auto i:m1)
    {
        v.pb(i.second);
    }
    sort(all(v));
    reverse(all(v));

    //print v
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


   




    




    


















//    

//    // number of distinct permutations of S
// // such that the count of all palindromic substrings does not exceed N

//     ll dp[n+1][n+1];
//     mem(dp,0);
//     dp[0][0]=1;
//     for(ll i=0;i<n;i++){
//         for(ll j=0;j<n;j++){
//             if(s[i]==s[j]){
//                 dp[i+1][j+1]=dp[i][j]+dp[i+1][j];
//             }
//             else{
//                 dp[i+1][j+1]=dp[i+1][j];
//             }
//         }
//     }

//     //print dp 

//     for(ll i=0;i<=n;i++){
//         for(ll j=0;j<=n;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;


//     //print max value from dp
//     ll max=0;
//     for(ll i=0;i<=n;i++){
//         for(ll j=0;j<=n;j++){
//             if(dp[i][j]>max){
//                 max=dp[i][j];
//             }
//         }
//     }
//     cout<<max<<endl;




    // ans=dp[n][n];
    // cout<<ans<<endl;


    
    

}

    return 0;
}