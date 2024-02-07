#
# @lc app=leetcode id=522 lang=python3
#
# [522] Longest Uncommon Subsequence II
#

# @lc code=start
class Solution:
    def findLUSlength(self, strs: List[str]) -> int:

        def isSubsequence(s, t):
            t = iter(t)
            return all(c in t for c in s)

        strs.sort(key=len, reverse=True)
        for i, word in enumerate(strs):
            if all(not isSubsequence(word, strs[j]) for j in range(len(strs)) if j != i):
                return len(word)
        return -1
        
# @lc code=end

