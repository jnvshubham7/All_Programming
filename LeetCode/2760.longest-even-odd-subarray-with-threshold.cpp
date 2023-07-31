/*
 * @lc app=leetcode id=2760 lang=cpp
 *
 * [2760] Longest Even Odd Subarray With Threshold
 */

// @lc code=start
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans = 0;
        int l = 0, r = 0;
        while (l < n) {
            while (r < n - 1 && nums[r + 1] <= threshold && (nums[r] + nums[r + 1]) % 2 == 1) {
                r++;
            }
            ans = max(ans, r - l + 1);
            l++;
            r = max(r, l);
        }
        return ans;
    }
};
// @lc code=end

