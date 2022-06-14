/*
 * @lc app=leetcode id=2154 lang=cpp
 *
 * [2154] Keep Multiplying Found Values by Two
 */

// @lc code=start
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

          int i = 0;
        int j = nums.size() - 1;
        while(i <= j)
        {
            if(nums[i] == original)
            {
                original = original * 2;
                i++;
                
            }
            // else if(nums[j] == original)
            // {
            //     original = original * 2;
            //     i++;
            //     j--;
            // }
            else
                return original;
        }
        return original;
        
    }
};
// @lc code=end

