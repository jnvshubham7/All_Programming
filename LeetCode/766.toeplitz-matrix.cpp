/*
 * @lc app=leetcode id=766 lang=cpp
 *
 * [766] Toeplitz Matrix
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        if(matrix.size() == 0 || matrix[0].size() == 0)
            return true;

        for(int i = 0; i < matrix.size() - 1; i++)  
        {
            for(int j = 0; j < matrix[0].size() - 1; j++)
            {
                if(matrix[i][j] != matrix[i+1][j+1])
                    return false;
            }
        }   
        return true;
        
        
    }
};
// @lc code=end

