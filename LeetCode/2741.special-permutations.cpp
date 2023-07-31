/*
 * @lc app=leetcode id=2741 lang=cpp
 *
 * [2741] Special Permutations
 */

// @lc code=start
class Solution {
public:
    int specialPerm(vector<int>& nums) {

        vector<vector<int>> v;

        
        Permutations(nums, 0, nums.size() - 1, v);

        int ans = 0;

    //    For all indexes 0 <= i < n - 1, either nums[i] % nums[i+1] == 0 or nums[i+1] % nums[i] == 0.


        for (int i = 0; i < v.size(); i++) {
            bool flag = true;
            for (int j = 0; j < v[i].size() - 1; j++) {
                if (v[i][j] % v[i][j + 1] != 0 && v[i][j + 1] % v[i][j] != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans++;
            }
        }

        return ans;





        
    }

    void Permutations(vector<int>& nums, int l, int r, vector<vector<int>>& v) {
        if (l == r) {
            v.push_back(nums);
        } else {
            for (int i = l; i <= r; i++) {
                swap(nums[l], nums[i]);
                Permutations(nums, l + 1, r, v);
                swap(nums[l], nums[i]);
            }
        }
    }
};
// @lc code=end

