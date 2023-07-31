/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n=rooms.size();
       

        vector<int> vis(n,0);

        dfs(rooms,0,vis);

        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                return false;
            }
        }
        return true;
        
    }

    void dfs(vector<vector<int>>& rooms, int cur, vector<int>& vis)
    {
        vis[cur]=1;

        for(int i=0;i<rooms[cur].size();i++)
        {

            if(vis[rooms[cur][i]]==0)
            {
                dfs(rooms,rooms[cur][i],vis);
            }
            
        }
    }
   
    
};
// @lc code=end

