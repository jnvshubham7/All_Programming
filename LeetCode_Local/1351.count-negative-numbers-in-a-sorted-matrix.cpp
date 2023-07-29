/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {


        int cnt=0;


        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]<0)
                cnt++;
            }
        }

        return cnt;

        // int count=0;
        // for(int i=0; i<grid.size(); i++)
        // {
        //     int s=0, e=grid[i].size()-1, mid;
        //     while(s<=e)
        //     {
        //         mid=(s+e)/2;
        //         if(grid[i][mid]<0)
        //             e=mid-1;
        //         else
        //             s=mid+1;
        //     }
        //     count+=grid[i].size()-s;
        // }
        // return count;

        // int cnt=0;

        // for(int i=0;i<grid.size();i++)
        // {
        //     int s=0, e=grid[i].size()-1,  mid;

        //     while(s<=e)
        //     {
        //         mid=(s+e)/2;

        //         if(grid[i][mid]<0)
        //         e=mid-1;

        //         else 
        //         s=mid+1;
        //     }

        //     cnt+=grid[i].size()-s;


        // }

        // return  cnt;

        
        
    }
};
// @lc code=end

