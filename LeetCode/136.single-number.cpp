/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {

         if(nums.size() < 1) {
            return 0;
        }
        
        else if(nums.size() > 1) {
            
            sort(nums.begin(), nums.end());
            
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] != nums[i+1]) {
                    return nums[i];
                }
                i++;
            }
        }
        
        //else for nums.size() == 1
        return nums[0];
        
    }
};
// @lc code=end

