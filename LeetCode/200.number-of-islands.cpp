/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        if(m==0) return 0;
        int cnt=0;

        vector<vector<int>> vis(n,vector<int>(m,0));
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cnt++;
                    dfs(grid,vis,i,j);
                }
            }
        }



        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(grid[i][j]=='1'){
        //             cnt++;
        //             dfs(grid,i,j);
        //         }
        //     }
        // }
        return cnt;
        
    }

    void dfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0' || vis[i][j]==1) return;
        vis[i][j]=1;
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i-1,j);
        dfs(grid,vis,i,j+1);
        dfs(grid,vis,i,j-1);
    }

    // void dfs(vector<vector<char>>& grid,int i,int j){
    //     if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]!='1')
    //     return;
    //     grid[i][j]='0';
    //     dfs(grid,i+1,j);
    //     dfs(grid,i-1,j);
    //     dfs(grid,i,j+1);
    //     dfs(grid,i,j-1);




    // }
};
// @lc code=end

