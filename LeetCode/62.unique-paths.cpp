/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {

       vector<vector<int>> memo(m, vector<int>(n,-1));

         return rec(memo, 0, 0, m, n);

       



    }


    int rec(vector<vector<int>>& memo, int i, int j, int m, int n)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }

        if(i>=m || j>=n)
        {
            return 0;
        }

        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }

        int ans=rec(memo, i+1, j, m, n) + rec(memo, i, j+1, m, n);

        memo[i][j]=ans;

        return ans;


    }






};

// @lc code=end


