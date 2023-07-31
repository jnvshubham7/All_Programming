/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

       

      




        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        vector<int> res;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == 1) {
                res.push_back(it->first);
            }
        }
        return res;
        
        
    }
};
// @lc code=end

