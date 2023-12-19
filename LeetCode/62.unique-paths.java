/*
 * @lc app=leetcode id=62 lang=java
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
    public int uniquePaths(int m, int n) {

        //Brute Force

        // if(m==1 || n==1)
        //     return 1;
        // return uniquePaths(m-1, n) + uniquePaths(m, n-1);

        // int[][] dp = new int[m][n];
        // for(int i=0;i<m;i++)
        //     dp[i][0]=1;
        // for(int j=0;j<n;j++)
        //     dp[0][j]=1;
        // for(int i=1;i<m;i++)
        // {
        //     for(int j=1;j<n;j++)
        //     {
        //         dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //     }
        // }
        // return dp[m-1][n-1];


        if(m==1 || n==1)
        {
            return 1;
        }


        return uniquePaths(m-1, n) + uniquePaths(m, n-1);


        int[][] dp = new int[m][n];

        for(int i=0;i<n;i++)
        {
            dp[0][i]=1;
        }

        for(int j=0;j<m;j++)
        {
            dp[j][0]=1;
        }

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }

        return dp[m-1][n-1];


        

        //Optimized

        // int[] dp = new int[n];
        // dp[0]=1;
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=1;j<n;j++)
        //     {
        //         dp[j]+=dp[j-1];
        //     }
        // }
        // return dp[n-1];
        
    }
}
// @lc code=end

