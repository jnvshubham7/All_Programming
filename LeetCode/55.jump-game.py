#
# @lc app=leetcode id=55 lang=python3
#
# [55] Jump Game
#

# @lc code=start
class Solution:
    def canJump(self, nums: List[int]) -> bool:

        n = len(nums)

        final_r = n-1

        for i in range(n-2,-1,-1):
            if i + nums[i] >= final_r:
                final_r =i


        return final_r==0

     
        
# @lc code=end

