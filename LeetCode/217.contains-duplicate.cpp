/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
           
            s.insert(nums[i]);
        }

        return s.size() != nums.size();

        
    }
};
// @lc code=end

