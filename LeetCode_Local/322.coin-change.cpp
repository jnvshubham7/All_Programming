/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
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
    




// @lc code=start
class Solution {
public:


    int coinChange(vector<int>& coins, int amount) {

        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));

       int res=  rec(coins,amount,0, dp);

         if(res==INT_MAX-1)
         {
              return -1;
         }
         else
         {
              return res;
         }
      
    }

    int rec(vector<int>& coins,int amount,int i, vector<vector<int>> &dp)
    {
        if(amount==0)
        {
            return 0;
        }

        if(dp[i][amount]!=-1)
        {
            return dp[i][amount];
        }

        if(i>=coins.size())
        {
            return INT_MAX-1;
        }

        if(coins[i]<=amount)
        {
            return dp[i][amount]=min(1+rec(coins,amount-coins[i],i, dp),rec(coins,amount,i+1, dp));
        }
        else
        {
            return dp[i][amount]=rec(coins,amount,i+1, dp);
        }
        
    }                                               

   
};
// @lc code=end






int main(){
Solution s;

   int n;
    cin>>n;
    vi v;
    fr(i,n)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int amount;
    cin>>amount;
    cout<<s.coinChange(v,amount)<<endl;


    return 0;
}



































 int solve(vector<int>& coins, int amount)
   {

    

    int n=coins.size();
    int m=amount;

    // if(n==1 && coins[0]!=amount)
    // {
    //     return -1;
    // }

    int dp[n+1][m+1];
     for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=m;i++)
    {
        dp[0][i]=INT_MAX-1;
    }

   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(coins[i-1]<=j)
            {
                dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
           
        }

    }

    if(dp[n][m]==INT_MAX-1)
    {
        return -1;
    }
    else
    {
        return dp[n][m];
    }

   

   // memset(dp,-1,sizeof(dp));

    // for(int i=0;i<=m;i++)
    // {
    //     dp[0][i]=0;
    // }

    // for(int i=0;i<=n;i++)
    // {
    //     dp[i][0]=1;
    // }

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         if(coins[i-1]<=j)
    //         {
    //             dp[i][j]=1+min(dp[i-1][j-coins[i-1]],dp[i][j-coins[i-1]]);
    //         }
    //         else
    //         {
    //             dp[i][j]=dp[i-1][j];
    //         }
           
    //     }

    // }

    // return dp[n][m];

