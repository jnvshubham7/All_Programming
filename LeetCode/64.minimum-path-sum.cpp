class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        vector<vector<int> > dp(grid.size()+1,vector<int>(grid[0].size()+1,-1));

        int n=grid.size();
        int m=grid[0].size();

        return rec(grid,n,m,0,0,dp);

      
    }

    int rec(vector<vector<int>>& grid,int n,int m,int i,int j, vector<vector<int> > &dp)
    {
        if(i==n-1 && j==m-1)
        {
            return grid[i][j];
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        if(i>=n || j>=m)
        {
            return INT_MAX;
        }

        int op1=rec(grid,n,m,i+1,j, dp);
        int op2=rec(grid,n,m,i,j+1, dp);

        return dp[i][j]=min(op1,op2)+grid[i][j];
    }
};