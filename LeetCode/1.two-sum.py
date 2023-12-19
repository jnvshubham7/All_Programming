#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], tar: int) -> List[int]:

        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if nums[i]+nums[j]==target:
        #             return [i, j]



        # Brute force
        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if nums[i] + nums[j] == target:
        #             return [i, j]


        hs ={}
        for i, nums in enumerate(nums):
            if tar-nums in hs:
                return [hs[tar-nums], i]
                hs[nums]=i

                 





     


                

        


        # Hash table
        # hash_table = {}
        # for i, num in enumerate(nums):
        #     if target - num in hash_table:
        #         return [hash_table[target - num], i]
        #     hash_table[num] = i

        # Two-pass hash table
        # hash_table = {}
        # for i, num in enumerate(nums):
        #     hash_table[num] = i

        # for i, num in enumerate(nums):
        #     if target - num in hash_table and hash_table[target - num] != i:
        #         return [i, hash_table[target - num]]
        




# @lc code=end



