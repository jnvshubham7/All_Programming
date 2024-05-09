/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        vector<int> missing;
        set<int> nums(arr.begin(), arr.end());

        for(int i = 1; i <= arr[arr.size() - 1]; i++) {
            if(nums.find(i) == nums.end()) {
                missing.push_back(i);
            }
        }

        if(missing.size() >= k) {
            return missing[k - 1];
        }

        int last = arr[arr.size() - 1];

        for(int i = 1; i <= k - missing.size(); i++) {
            missing.push_back(last + i);
        }

        return missing[k - 1];
    }
};
// @lc code=end

