/*
 * @lc app=leetcode id=704 lang=java
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
    public int search(int[] nums, int x) {

        int n = nums.length;

        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (nums[mid] == x) {
                return mid;
            } else if (nums[mid] > x) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return -1;

    }
}
// @lc code=end
