class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        nums.sort()
        res = []
        def rec(nums, path):
            res.append(path[:])
            for i in range(len(nums)):
                if i > 0 and nums[i] == nums[i-1]:
                    continue
                path.append(nums[i])
                rec(nums[i+1:], path)
                path.pop()
        rec(nums, [])
        return res
