class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        vector<vector<int>> ans;

        int n = grid.size();
        if (n == 0) return ans;
        int m = grid[0].size();
        if (m == 0) return ans;

        int x = n - 1;
        int y = m - 1;

        
        for (int i = 0; i < k; i++) {
            int temp = grid[x][y];
            for (int j = y; j > 0; j--) {
                grid[x][j] = grid[x][j - 1];
            }
            grid[x][0] = temp;
            x--;
            if (x < 0) {
                x = n - 1;
                y--;
                if (y < 0) {
                    y = m - 1;
                }
            }
        }
        return grid;

        


        
    }
};