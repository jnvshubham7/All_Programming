/*
 * @lc app=leetcode id=2320 lang=cpp
 *
 * [2320] Count Number of Ways to Place Houses
 */

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
    




// @lc code=start

class Solution {
public:

 int mod = 1000000007;

 int ways(int N,vector<int> &dp){
	    if(N<=0) return 1;
	    
	    if(dp[N]!=-1) return dp[N];
	    
	    int pick=ways(N-2,dp);  
	    int nopick=ways(N-1,dp);
	    
	    return dp[N]=(pick+nopick)%mod;
	}
        

// Returns count of possible ways for N sections
int countWays(int N)
{  
     vector<int> dp(N+1,-1);
	    
	    int totalWays=ways(N,dp);
	    
	    return (1LL*totalWays*totalWays)%mod;
    
    // // Base case
    // if (N == 1)
    //     return 4;  
 
   
    // int countB=1, countS=1, prev_countB, prev_countS;
 
   
    // for (int i=2; i<=N; i++)
    // {
    //     prev_countB = countB;
    //     prev_countS = countS;
 
    //     countS = (prev_countB + prev_countS) % mod;
    //     countB = prev_countS ;
    // }
 
   
    // int result = (countS + countB) % mod;
 
   
    // return (result*result) % mod;
}


    int countHousePlacements(int n) {

        return countWays(n);

   

    vector<int> dp(1001, 0);
    // dp[1]=4;
    // dp[2]=9;
   // dp[3]=25;
    //dp[4]=64;
    //number of ways houses can be placed such that no two houses are adjacent to each other on the same side of the street.

    // for(int i=3;i<=totalPlots;i++){
    //     dp[i]=(dp[i-1]*2)%mod;
    // }
    // return dp[n];
    
    


   
   

    
    // int dp[totalPlots+1][totalHouses+1];
    // memset(dp,0,sizeof(dp));

    // dp[0][0]=1;
    // for(int i=1;i<=totalPlots;i++)
    // {
    //     dp[i][0]=1;
    // }
    // for(int i=1;i<=totalHouses;i++)
    // {   
    //     dp[0][i]=1;
    // }
    // for(int i=1;i<=totalPlots;i++)
    // {
    //     for(int j=1;j<=totalHouses;j++)
    //     {
    //         dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]+dp[i][j-1])%mod;
    //     }
    // }
    // return dp[totalPlots][totalHouses];

        // int dp[n+1][n+1];
        // memset(dp,0,sizeof(dp));
        // dp[0][0]=1;
        // for(int i=1;i<=n;i++)
        // {
        //     dp[i][0]=1;
        //     for(int j=1;j<=i;j++)
        //     {
        //         dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        //     }
        // }
        // return dp[n][n];




    }
};

// @lc code=end





int main(){
Solution s;

   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<s.countHousePlacements(n)<<endl;
    }
    
    return 0;
}
