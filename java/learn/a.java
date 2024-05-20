import java.util.Arrays;


public class a {
    public int maxScore(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        int[][] dp = new int[rows][cols];
        
        // Initialize the dp array with minimum values
        for (int i = 0; i < rows; i++) {
            Arrays.fill(dp[i], Integer.MIN_VALUE);
        }
        
        int maxScore = Integer.MIN_VALUE;
        
        // Compute the maximum score starting from each cell
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                maxScore = Math.max(maxScore, computeMaxScore(grid, dp, i, j));
            }
        }
        
        return maxScore;
    }
    
    private int computeMaxScore(int[][] grid, int[][] dp, int row, int col) {
        // If out of bounds, return 0 (base case)
        if (row >= grid.length || col >= grid[0].length) {
            return 0;
        }
        
        // If already computed, return the cached value
        if (dp[row][col] != Integer.MIN_VALUE) {
            return dp[row][col];
        }
        
        int maxRight = Integer.MIN_VALUE;
        int maxDown = Integer.MIN_VALUE;
        
        // Calculate max score for moving right
        for (int j = col + 1; j < grid[0].length; j++) {
            maxRight = Math.max(maxRight, grid[row][j] - grid[row][col] + computeMaxScore(grid, dp, row, j));
        }
        
        // Calculate max score for moving down
        for (int i = row + 1; i < grid.length; i++) {
            maxDown = Math.max(maxDown, grid[i][col] - grid[row][col] + computeMaxScore(grid, dp, i, col));
        }
        
        // Store the result in dp array and return
        dp[row][col] = Math.max(maxRight, maxDown);
        
        return dp[row][col];
    }
    
    public static void main(String[] args) {
        a sol = new a();
        int[][] grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        System.out.println(sol.maxScore(grid)); // Output: 0
        
    }
}
