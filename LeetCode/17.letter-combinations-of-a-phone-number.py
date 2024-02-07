#
# @lc app=leetcode id=17 lang=python3
#
# [17] Letter Combinations of a Phone Number
#

# @lc code=start
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:

        if not digits:
            return []

        phone = {
            '2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl',
            '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'
        }

        def backtrack(index, path):
            if len(path) == len(digits):
                result.append(''.join(path))
                return

            for i in range(index, len(digits)):
                for letter in phone[digits[i]]:
                    path.append(letter)
                    backtrack(i + 1, path)
                    path.pop()

        result = []
        backtrack(0, [])
        return result

        



        
        
# @lc code=end

