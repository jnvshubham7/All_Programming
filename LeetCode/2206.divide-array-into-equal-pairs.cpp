/*
 * @lc app=leetcode id=2206 lang=cpp
 *
 * [2206] Divide Array Into Equal Pairs
 */

// @lc code=start
class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        //check all frequencies is even then return true else return false
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second % 2 != 0) {
                return false;
            }
        }
        return true;
        
    }
};
// @lc code=end

