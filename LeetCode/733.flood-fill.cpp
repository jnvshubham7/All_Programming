/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    
    bool vis[50][50];
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n=image.size();
        int m=image[0].size();


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=false;
            }
        }

        dfs(image,sr,sc,color,image[sr][sc],n,m);

        return image;

    }

    void dfs(vector<vector<int>>& image,int i,int j,int color,int old,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==true || image[i][j]!=old)
        {
            return;
        }

        vis[i][j]=true;
        image[i][j]=color;

        dfs(image,i+1,j,color,old,n,m);
        dfs(image,i-1,j,color,old,n,m);
        dfs(image,i,j+1,color,old,n,m);
        dfs(image,i,j-1,color,old,n,m);

    }



        



    



    
};
// @lc code=end

