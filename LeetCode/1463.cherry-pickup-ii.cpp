/*
 * @lc app=leetcode id=1463 lang=cpp
 *
 * [1463] Cherry Pickup II
 */

// @lc code=start
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = m - 1; i >= 0; i--) {
            vector<vector<int>> dp2(n, vector<int>(n, 0));
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    int ans = 0;
                    for (int j2 = j - 1; j2 <= j + 1; j2++) {
                        for (int k2 = k - 1; k2 <= k + 1; k2++) {
                            if (j2 >= 0 && j2 < n && k2 >= 0 && k2 < n) {
                                ans = max(ans, dp[j2][k2]);
                            }
                        }
                    }
                    dp2[j][k] = ans + grid[i][j] + (j != k ? grid[i][k] : 0);
                }
            }
            dp = dp2;
        }
        return dp[0][n - 1];
        
    }
};
// @lc code=end

