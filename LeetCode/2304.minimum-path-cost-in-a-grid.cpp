/*
 * @lc app=leetcode id=2304 lang=cpp
 *
 * [2304] Minimum Path Cost in a Grid
 */

// @lc code=start
class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {

          int m = grid.size();
        int n = grid[0].size();
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < n; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[m - 1][n - 1] + moveCost[m - 1][n - 1];
        
    }
};
// @lc code=end

