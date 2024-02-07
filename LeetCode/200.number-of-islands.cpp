/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    
     

int numIslands(vector<vector<char>>& g) {

    int n=g.size();
    int m=g[0].size();

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(g[i][j]=='1')
            {
                cnt++;
                rec(i,j,n,m,g);
                

            }
        }
    }

    return cnt;

    
   
}


void rec(int i, int j, int n, int m, vector<vector<char>>& g )
{
    if(i<0 || j<0 || i>=n || j>=m || g[i][j]=='0')
    {
        return;
    }

    g[i][j]='0';

    rec(i+1,j,n,m,g);
     rec(i-1,j,n,m,g);
     rec(i,j+1,n,m,g);
     rec(i,j-1,n,m,g);

     
    




}



    
};
// @lc code=end

