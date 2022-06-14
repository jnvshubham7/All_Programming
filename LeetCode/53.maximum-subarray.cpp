/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

         int n = nums.size();
        vector<int> dp(n, 0);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            dp[i] = nums[i];
            if (i > 0) {
                dp[i] += dp[i - 1];
            }
            ans = max(ans, dp[i]);
        }
        return ans;
        
    }
};
// @lc code=end

