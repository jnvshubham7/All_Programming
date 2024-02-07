#
# @lc app=leetcode id=73 lang=python3
#
# [73] Set Matrix Zeroes
#

# @lc code=start
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """

        row = []
        col = []

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    row.append(i)
                    col.append(j)

        for i in row:
            for j in range(len(matrix[0])):
                matrix[i][j] = 0

        for j in col:
            for i in range(len(matrix)):
                matrix[i][j] = 0

        return matrix
        
        
# @lc code=end

