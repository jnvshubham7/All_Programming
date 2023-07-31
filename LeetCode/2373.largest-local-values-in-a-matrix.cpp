/*
 * @lc app=leetcode id=2373 lang=cpp
 *
 * [2373] Largest Local Values in a Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

         int n = grid.size();
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));




        // for (int i = 0; i < n - 2; i++) {
        //     for (int j = 0; j < n - 2; j++) {
        //         maxLocal[i][j] = max(max(grid[i][j], grid[i][j + 1]), max(grid[i][j + 2], grid[i + 1][j]));
        //         maxLocal[i][j] = max(maxLocal[i][j], max(grid[i + 1][j + 1], grid[i + 2][j]));
        //         maxLocal[i][j] = max(maxLocal[i][j], max(grid[i + 2][j + 1], grid[i + 2][j + 2]));
        //         maxLocal[i][j] = max(maxLocal[i][j], max(grid[i + 1][j + 2], grid[i + 2][j + 2]));
        //     }
        // }

        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {

                        //cout<<"i="<<i<<" j="<<j<<" k="<<k<<" l="<<l<<endl;
                        

                        maxLocal[i][j] = max(maxLocal[i][j], grid[k][l]);
                    }

                }
                cout<<endl;
            }
        }
        return maxLocal;
        
    }
};
// @lc code=end

