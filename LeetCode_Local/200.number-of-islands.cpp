/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    
     
     void dfsUtil(vector<vector<char>>& grid, int r, int c) {
    int rows = grid.size();
    int cols = grid[0].size();

    if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0')
        return;

    grid[r][c] = '0';
    dfsUtil(grid, r + 1, c);
    dfsUtil(grid, r - 1, c);
    dfsUtil(grid, r, c + 1);
    dfsUtil(grid, r, c - 1);
}

int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    if (rows == 0)
        return 0;
    int cols = grid[0].size();

    int count = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == '1') {
                count++;
                dfsUtil(grid, r, c);
            }
        }
    }

    return count;
}



    
};
// @lc code=end

