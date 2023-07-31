/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:

    int solve(vector<int>& coins, int amount)
    {
        
 int n=coins.size();
        int m=amount;

        
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<=m;i++)
        {  
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];

                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        return dp[n][m];
    }


    int change(int amount, vector<int>& coins) {
       

        return solve(coins,amount);
        
    }
};
// @lc code=end

