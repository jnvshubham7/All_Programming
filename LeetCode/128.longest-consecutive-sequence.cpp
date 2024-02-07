/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.length;
        if (n == 0) return 0;

        int mxx = Arrays.stream(nums).max().getAsInt();

        // counting sort create at

        int[] cnt = new int[mxx + 1];

        for (int i = 0; i < n; i++) {
            cnt[nums[i]]++;
        }

        int ans = 0, cur = 0;

        for (int i = 0; i <= mxx; i++) {
            if (cnt[i] > 0) {
                cur++;
                ans = Math.max(ans, cur);
            } else {
                cur = 0;
            }
        }

        return ans;

       

        
       
    }
};
// @lc code=end

