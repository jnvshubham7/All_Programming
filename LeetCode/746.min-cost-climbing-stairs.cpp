/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        vector<int> dp(n, 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < n; i++) {
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
        }

        //print vector
        for (int i = 0; i < n; i++) {
           // cout << dp[i] << " ";
        }
        cout << endl;
        return min(dp[n - 1], dp[n - 2]);


        
    }
};
// @lc code=end

