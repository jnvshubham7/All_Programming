#
# @lc app=leetcode id=58 lang=python3
#
# [58] Length of Last Word
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        # words = s.split()
        # if len(words) == 0:
        #     return 0

        # return len(words[-1])

        cnt=0

        for i in range(len(s)-1,-1,-1):
            if s[i] != ' ':
                cnt+=1
            elif cnt>0:
                return cnt

        return cnt


       





           


       
        
# @lc code=end




if __name__ == "__main__":
    # Instantiate the Solution class
    solution = Solution()

    # Take input from the user
    input_str = input("Enter a string: ")

    # Call the lengthOfLastWord method and print the result
    result = solution.lengthOfLastWord(input_str)
    print("Length of the last word:", result)


