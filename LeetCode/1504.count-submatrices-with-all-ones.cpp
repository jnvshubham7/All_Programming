/*
 * @lc app=leetcode id=1504 lang=cpp
 *
 * [1504] Count Submatrices With All Ones
 */

// @lc code=start
class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(mat[i][j] == 1)
                {
                    dp[i][j] = 1;
                    if(j>0)
                    {
                        dp[i][j] += dp[i][j-1];
                    }
                }
            }
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int mn = dp[i][j];
                for(int k=i; k<n; k++)
                {
                    mn = min(mn, dp[k][j]);
                    ans += mn;
                }
            }
        }

        return ans;

        
        
    }
};
// @lc code=end

