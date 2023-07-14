/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int cnt=0;

        int m=grid.size();

        int n=grid[0].size();

        queue<pair<int,int>> q;

        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (grid[i][j]==2)
                    q.push({i,j});
                else if (grid[i][j]==1)
                    cnt++;
            }
        }

        if (cnt==0)
            return 0;

        int ans=0;

        while(q.size()>0)
        {
            int sz=q.size();
            while(sz--)
            {
                pair<int,int> rem=q.front();
                q.pop();
                int i=rem.first;
                int j=rem.second;
                if (i-1>=0 && grid[i-1][j]==1)
                {
                    grid[i-1][j]=2;
                    q.push({i-1,j});
                    cnt--;
                }
                if (i+1<m && grid[i+1][j]==1)
                {
                    grid[i+1][j]=2;
                    q.push({i+1,j});
                    cnt--;
                }
                if (j-1>=0 && grid[i][j-1]==1)
                {
                    grid[i][j-1]=2;
                    q.push({i,j-1});
                    cnt--;
                }
                if (j+1<n && grid[i][j+1]==1)
                {
                    grid[i][j+1]=2;
                    q.push({i,j+1});
                    cnt--;
                }
            }
            ans++;
        }

        if (cnt==0)
            return ans-1;
        else
            return -1;
    }
};
// @lc code=end

