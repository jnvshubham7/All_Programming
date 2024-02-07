#
# @lc app=leetcode id=35 lang=python3
#
# [35] Search Insert Position
#

# @lc code=start
class Solution:
    def searchInsert(self, nums: List[int], x: int) -> int:

        # l = 0
        # r = len(nums) - 1

        # while l <= r:
        #     mid = (l + r) // 2
        #     if nums[mid] == x:
        #         return mid
        #     elif nums[mid] < x:
        #         l = mid + 1
        #     else:
        #         r = mid - 1

        # return l

        l=0
        r=len(nums)-1

        while l<=r:
            mid=(l+r)//2
            if nums[mid]==x:
                return mid
            elif nums[mid]<x:
                l=mid+1
            else:
                r=mid-1

        return l
        
# @lc code=end


if __name__ == "__main__":
    # Instantiate the Solution class
    solution = Solution()

    # 1,3,5,6
    # 5

    nums = [1,3,5,6]
    x = 5

    # Call the searchInsert method and print the result
    result = solution.searchInsert(nums, x)

    print("Index of the target:", result)

    

  