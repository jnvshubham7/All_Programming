class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        //memo 
        vector<vector<int>> memo(m, vector<int>(n, -1));

        return helper(grid, m - 1, n - 1);
    }

    int helper(vector<vector<int>>& grid, int row, int col) {
        // Base case: if we reach the top-left cell, return its value
        if (row == 0 && col == 0) {
            return grid[0][0];
        }

        if()

       
    }
};
