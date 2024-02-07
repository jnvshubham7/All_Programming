#
# @lc app=leetcode id=39 lang=python3
#
# [39] Combination Sum
#

# @lc code=start
class Solution:
    def combinationSum(self, arr: List[int], x: int) -> List[List[int]]:

        ans =[]


        def rec(arr, path, ind, x ):
            if x < 0:
                return
            if x == 0:
                # ans.append(path[:])
                ans.append(path)
                return
            for i in range(ind, len(arr)):
                rec(arr, path + [arr[i]], i, x - arr[i])  
               
               
               
                # path.append(arr[i])

                # rec(arr, path, i, x - arr[i])
                # path.pop()




        rec(arr, [], 0, x )

        return ans











        
# @lc code=end

