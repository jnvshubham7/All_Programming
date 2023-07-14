/*
 * @lc app=leetcode id=1642 lang=cpp
 *
 * [1642] Furthest Building You Can Reach
 */

// @lc code=start
class Solution {
public:
    int furthestBuilding(vector<int>& height, int bricks, int ladders) {

        int curr=0;
       for(int i=0;i<height.size()-1;i++)
       {
           if(height[i+1]>height[i])
           {
               int diff=height[i+1]-height[i];
               if(bricks>=diff)
               {
                   bricks-=diff;
               }
               else if(ladders>0)
               {
                   ladders--;
               }
              
                else
                {
                     return i;
               }
              
           }
       }
        return height.size()-1;
        

    }
};
// @lc code=end

