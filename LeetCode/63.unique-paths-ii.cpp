/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

        vector<vector<int>> memo(m, vector<int>(n,-1));

        return rec(memo, 0, 0, m, n, obstacleGrid);

        
    }

    int rec(vector<vector<int>>& memo, int i, int j, int m, int n, vector<vector<int>>& obstacleGrid)
    {
        if(i==m-1 && j==n-1)
        {
            if(obstacleGrid[i][j]==1)
            {
                return 0;
            }
            return 1;
        }

        if(i>=m || j>=n)
        {
            return 0;
        }

        if(obstacleGrid[i][j]==1)
        {
            return 0;
        }

        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }

        int ans=rec(memo, i+1, j, m, n, obstacleGrid) + rec(memo, i, j+1, m, n, obstacleGrid);

        memo[i][j]=ans;

        return ans;


    }






};
// @lc code=end

