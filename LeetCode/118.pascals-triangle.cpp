/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

       int n = numRows;
         vector<vector<int>> ans;
         int dp[n][n];
           dp[0][0] = 1;
              for (int i = 1; i < n; i++) {
                dp[i][0] = 1;
                dp[i][i] = 1;
                for (int j = 1; j < i; j++) {
                     dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                }
              }
                for (int i = 0; i < n; i++) {
                    vector<int> temp;
                    for (int j = 0; j <= i; j++) {
                        temp.push_back(dp[i][j]);
                    }
                    ans.push_back(temp);
                }
                return ans;



    }
};
// @lc code=end

