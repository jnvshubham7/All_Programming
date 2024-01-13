/*
 * @lc app=leetcode id=31 lang=java
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {

    List<List<Integer>> res = new ArrayList<>();

    void swap(int[] nums, int i, int j) {
        int tmp = nums[i]; nums[i] = nums[j]; nums[j] = tmp;
    }



    void rec(int[] nums, int i) {
        if (i == nums.length) {
            List<Integer> list = new ArrayList<>();
            for (int num : nums) {
                list.add(num);
            }
            res.add(list);
            return;
        }
        for (int j = i; j < nums.length; j++) {
            swap(nums, i, j);
            rec(nums, i + 1);
            swap(nums, i, j);
        }
    }


    public void nextPermutation(int[] nums) {

        











    }
}
// @lc code=end

