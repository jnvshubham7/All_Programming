/*
 * @lc app=leetcode id=2319 lang=cpp
 *
 * [2319] Check if Matrix Is X-Matrix
 */

// @lc code=start
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

         int n=grid.size();
        // int i,j;
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //         if(i==j)
        //         {
        //             if(grid[i][j]==0)
        //                 return false;
        //         }
        //         //check one diagonal
        //         else if(i+j==n-1)
        //         {
        //             if(grid[i][j]==0)
        //                 return false;
        //         }
        //         else
        //         {
        //             if(grid[i][j]!=0)
        //                 return false;
        //         }
        //     }
        // }
        // return true;

         //check all the diagonals are non-zero
        for(int i=0;i<n;i++)
        {
            if(grid[i][i]==0)
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(grid[i][n-i-1]==0)
            return false;
        }
        //check all the other elements are zero
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && grid[i][j]!=0)
                return false;
            }
        }
        return true;
        
        
    }
};
// @lc code=end

