#
# @lc app=leetcode id=70 lang=python3
#
# [70] Climbing Stairs
#

# @lc code=start
class Solution:



  


    def climbStairs(self, n: int) -> int:



        1. Recursion
        if n == 1:
            return 1
        if n == 2:
            return 2
        return self.climbStairs(n-1) + self.climbStairs(n-2)

        # 2. Recursion with memoization
        memo = {}
        def helper(n):
            if n in memo:
                return memo[n]
            if n == 1:
                return 1
            if n == 2:
                return 2
            memo[n] = helper(n-1) + helper(n-2)
            return memo[n]
        return helper(n)

        # 3. Iteration
        if n == 1:
            return 1
        if n == 2:
            return 2
        a, b = 1, 2
        for i in range(3, n+1):
            a, b = b, a+b
        return b



        
# @lc code=end

