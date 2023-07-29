/*
 * @lc app=leetcode id=2379 lang=cpp
 *
 * [2379] Minimum Recolors to Get K Consecutive Black Blocks
 */

// @lc code=start
class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int n=blocks.size();
        int min_change=INT_MAX;
        for(int i=0;i<n-k+1;i++)
        {
            int change=0;
            for(int j=i;j<i+k;j++)
            {
                if(blocks[j]=='W')
                    change++;
            }
            min_change=min(min_change,change);
        }
        return min_change;
       

        




        
    }
};
// @lc code=end

