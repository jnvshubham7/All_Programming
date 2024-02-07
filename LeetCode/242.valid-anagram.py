#
# @lc app=leetcode id=242 lang=python3
#
# [242] Valid Anagram
#

# @lc code=start
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        # 1. Sorting
        return sorted(s) == sorted(t)

        # # 2. Hash Table
        # if len(s) != len(t):
        #     return False
        # count = {}
        # for c in s:
        #     if c in count:
        #         count[c] += 1
        #     else:
        #         count[c] = 1
        # for c in t:
        #     if c in count:
        #         count[c] -= 1
        #     else:
        #         return False
        # for c in count:
        #     if count[c] != 0:
        #         return False
        # return True



       
        
# @lc code=end

