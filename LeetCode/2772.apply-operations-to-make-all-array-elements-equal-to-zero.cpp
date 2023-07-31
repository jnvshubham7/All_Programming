/*
 * @lc app=leetcode id=2772 lang=cpp
 *
 * [2772] Apply Operations to Make All Array Elements Equal to Zero
 */

// @lc code=start
class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
       int n = nums.size();
        vector<int> count(1000001, 0);
        int distinct = 0;
        for (int num : nums) {
            if (count[num] == 0) {
                distinct++;
            }
            count[num]++;
        }
        if (distinct > k) {
            return false;
        }
        int i = 0;
        while (true) {
            int j = i % k;
            bool allZero = true;
            for (int l = j; l < n; l += k) {
                if (nums[l] > 0) {
                    allZero = false;
                    nums[l]--;
                    count[nums[l] + 1]--;
                    if (count[nums[l] + 1] == 0) {
                        distinct--;
                    }
                    count[nums[l]]++;
                    if (count[nums[l]] == 1) {
                        distinct++;
                    }
                }
            }
            if (allZero) {
                return true;
            }
            if (distinct > k) {
                return false;
            }
            i++;
        }
    }
};
// @lc code=end

