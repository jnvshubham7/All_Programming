/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

         vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      temp[(i + k) % nums.size()] = nums[i];
    }
    // rotate the array back to the original position
    for (int i = 0; i < nums.size(); i++) {
      nums[i] = temp[i];
    }

  //  return nums;
        
    }
};
// @lc code=end

