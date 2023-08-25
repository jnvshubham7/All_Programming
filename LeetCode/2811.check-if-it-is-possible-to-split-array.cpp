/*
 * @lc app=leetcode id=2811 lang=cpp
 *
 * [2811] Check if it is Possible to Split Array
 */

// @lc code=start
class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {

         int n = nums.size();

         if(n<=2) return true;

      

         for(int i=1;i<n;i++)
         {
             if(nums[i-1]+nums[i] >= m)
             {
                return true;
             }
         }

            return false;

        
    }
};
// @lc code=end

