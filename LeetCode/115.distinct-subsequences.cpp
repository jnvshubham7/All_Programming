/*
 * @lc app=leetcode id=115 lang=cpp
 *
 * [115] Distinct Subsequences
 */

// @lc code=start
class Solution {
public:
    int numDistinct(string s, string t) {

        int m = s.size();
        int n = t.size();


       












      // int dp[m+1][n+1];
        // for (int i = 0; i <= m; i++) {
        //     dp[i][0] = 1;
        // }
        // for (int i = 1; i <= m; i++) {
        //     for (int j = 1; j <= n; j++) {
        //         if (s[i - 1] == t[j - 1]) {
        //             dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        //         } else {
        //             dp[i][j] = dp[i - 1][j];
        //         }
        //     }
        // }

        //print dp 
        // for (int i = 0; i <= m; i++) {
        //     for (int j = 0; j <= n; j++) {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        



        return dp[m][n];

        
    }
};
// @lc code=end

