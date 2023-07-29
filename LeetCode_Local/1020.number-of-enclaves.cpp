/*
 * @lc app=leetcode id=1020 lang=cpp
 *
 * [1020] Number of Enclaves
 */

// @lc code=start
class Solution {
public:
    int numEnclaves(vector<vector<int>>& g) {

        int n=g.size(),m=g[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 || i==n-1 || j==0 || j==m-1) && g[i][j]==1)
                {
                    dfs(g,i,j,n,m);
                }
            }
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    ans++;
                }
            }
        }
        return ans;
        
    }
    void dfs(vector<vector<int>>& g,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || g[i][j]==0)
            return;
        g[i][j]=0;
        dfs(g,i+1,j,n,m);
        dfs(g,i-1,j,n,m);
        dfs(g,i,j+1,n,m);
        dfs(g,i,j-1,n,m);
    }
};
// @lc code=end

