/*
 * @lc app=leetcode id=2762 lang=cpp
 *
 * [2762] Continuous Subarrays
 */

// @lc code=start
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int i = 0, j = 0;
        while (i < n) {
            int maxVal = nums[i], minVal = nums[i];
            while (j < n - 1 && abs(nums[j + 1] - maxVal) <= 2 && abs(nums[j + 1] - minVal) <= 2) {
                j++;
                maxVal = max(maxVal, nums[j]);
                minVal = min(minVal, nums[j]);
            }
            ans += j - i + 1;
            i++;
            j = max(j, i);
        }
        return ans;
    }
};
// @lc code=end

