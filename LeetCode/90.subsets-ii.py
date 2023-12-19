class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        # # Sort the input list to handle duplicates efficiently.
        # nums.sort()

        # # Result list to store subsets.
        # result = []

        # # Recursive function to generate subsets.
        # def backtrack(start, path):
        #     # Add the current subset to the result.
        #     result.append(path[:])

        #     # Iterate through the remaining elements.
        #     for i in range(start, len(nums)):
        #         # Skip duplicates to avoid duplicate subsets.
        #         if i > start and nums[i] == nums[i - 1]:
        #             continue

        #         # Include the current element in the subset.
        #         path.append(nums[i])

        #         # Recur to generate subsets starting from the next index.
        #         backtrack(i + 1, path)

        #         # Exclude the current element from the subset (backtrack).
        #         path.pop()

        # # Start the recursion from index 0 with an empty path.
        # backtrack(0, [])




        nums.sort()

        result =[]

        def backtrack(start,path):

            
            









        return result
