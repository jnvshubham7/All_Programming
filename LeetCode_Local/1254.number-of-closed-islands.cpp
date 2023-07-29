/*
 * @lc app=leetcode id=1254 lang=cpp
 *
 * [1254] Number of Closed Islands
 */

// @lc code=start
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j,n,m)){
                        ans++;
                    }
                }
            }
        }
        return ans;
        
        
    }

    bool dfs(vector<vector<int>>& grid,int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m){
            return false;
        }
        if(grid[i][j]==1){
            return true;
        }
        grid[i][j]=1;
        bool left=dfs(grid,i,j-1,n,m);
        bool right=dfs(grid,i,j+1,n,m);
        bool up=dfs(grid,i-1,j,n,m);
        bool down=dfs(grid,i+1,j,n,m);
        return left && right && up && down;
    }
};
// @lc code=end

