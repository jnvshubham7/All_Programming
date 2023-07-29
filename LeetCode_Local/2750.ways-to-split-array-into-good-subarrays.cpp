class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int ones = 0, zeros = 0;
        int ans = 0;
        while (right < n) {
            if (nums[right] == 1) {
                ones++;
            } else {
                zeros++;
            }
            while (ones > 1) {
                if (nums[left] == 1) {
                    ones--;
                } else {
                    zeros--;
                }
                left++;
            }
            if (ones == 1) {
                ans += (right - left);
            }
            right++;
        }
        return ans % 1000000007;
    }
};