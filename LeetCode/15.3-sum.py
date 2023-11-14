#
# @lc app=leetcode id=15 lang=python3
#
# [15] 3Sum
#

# @lc code=start
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        # Sort the array
        nums.sort()

        # Initialize the list of triplets
        triplets = []

        # Loop through the array
        for i in range(len(nums)):

            # If the current element is greater than zero, we can stop
            if nums[i] > 0:
                break

            # If the current element is the same as the previous element, we can skip
            if i > 0 and nums[i] == nums[i-1]:
                continue

            # Set the left and right pointers
            l = i + 1
            r = len(nums) - 1

            # Loop through the array
            while l < r:

                # Compute the sum
                s = nums[i] + nums[l] + nums[r]

                # If the sum is less than zero, increment the left pointer
                if s < 0:
                    l += 1

                # If the sum is greater than zero, decrement the right pointer
                elif s > 0:
                    r -= 1

                # If the sum is zero, we have a triplet
                else:
                    triplets.append([nums[i], nums[l], nums[r]])

                    # Increment the left pointer
                    l += 1

                    # Decrement the right pointer
                    r -= 1

                    # Skip the duplicates
                    while l < r and nums[l] == nums[l-1]:
                        l += 1

                    # Skip the duplicates
                    while l < r and nums[r] == nums[r+1]:
                        r -= 1

        # Return the list of triplets
        return triplets
        
# @lc code=end

