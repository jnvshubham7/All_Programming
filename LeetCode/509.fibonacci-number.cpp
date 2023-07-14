/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int dp[32];
    int fib(int n) {

        dp[0] = 0;
        dp[1] = 1;

       for(int i = 2; i <= n; i++)
       {
              dp[i] = dp[i-1] + dp[i-2];
       }

       

        return dp[n];

        

       
       
      
    }
};
// @lc code=end

