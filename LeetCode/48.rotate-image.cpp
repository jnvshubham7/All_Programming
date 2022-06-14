/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

         int n=matrix.size();


           vector<vector<int>> temp(matrix);
    int size=matrix.size();
    for(int i=0;i<size;i++)
        for(int j=0; j<size;j++)
            matrix[i][j] = temp[n-j-1][i];
        
    }
};
// @lc code=end

