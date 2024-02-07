#
# @lc app=leetcode id=40 lang=python3
#
# [40] Combination Sum II
#

# @lc code=start
class Solution:
    def combinationSum2(self, arr: List[int], x: int) -> List[List[int]]:

        # ans =[]
        # arr.sort()

        # def rec(arr, path, ind, x ):
        #     if x < 0:
        #         return
        #     if x == 0:
        #         ans.append(path)
        #         return
        #     for i in range(ind, len(arr)):
        #         if i > ind and arr[i] == arr[i-1]:
        #             continue
        #         rec(arr, path + [arr[i]], i+1, x - arr[i])  
        # rec(arr, [], 0, x )
        # return ans

        ans =[]
        arr.sort()

        def rec(arr, path, ind, x):
            if x<0:
                return
            if x==0:
                ans.append(path)
                return
            for i in range(ind, len(arr)):
                if i>ind and arr[i] ==arr[i-1]:
                    continue
                rec(arr,path+[arr[i]], i+1, x- arr[i])


        rec(arr, [], 0, x)

        return ans
        
# @lc code=end

