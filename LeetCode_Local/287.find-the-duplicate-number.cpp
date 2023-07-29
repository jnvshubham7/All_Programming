/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

      int num = nums[0];
    int idx = 0;
    while(nums[idx] != -1){
	    num = nums[idx];
   	    nums[idx] = -1;
	    idx = num;
    }

   return num;
    }
};
// @lc code=end

