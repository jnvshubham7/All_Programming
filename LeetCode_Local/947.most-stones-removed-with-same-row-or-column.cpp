/*
 * @lc app=leetcode id=947 lang=cpp
 *
 * [947] Most Stones Removed with Same Row or Column
 */

// @lc code=start
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {

       int n=stones.size();
       vector<int> vis(n,0);
       int ans=0;
         for(int i=0;i<n;i++)
         {
              if(vis[i]==0)
              {
                
                ans+=  dfs(stones,vis,i,n);
              }
         }

            return ans;


      
    }

    int dfs(vector<vector<int>>& stones,vector<int>& vis,int i,int n)
    {
        vis[i]=1;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==0 && (stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]))
            {
                ans+=1+dfs(stones,vis,j,n);
            }
        }

        return ans;
    }





};
// @lc code=end

