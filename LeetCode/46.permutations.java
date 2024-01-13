import java.util.ArrayList;
import java.util.List;

class Solution {

    List<List<Integer>> ans;

    void swap(int i, int j, int[] nums) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void rec(int[] nums, int ind) {
        if (ind == nums.length - 1) {
            List<Integer> ls = new ArrayList<>();
            for (int it : nums) {
                ls.add(it);
            }
            ans.add(ls);
            return;
        }

        for (int i = ind; i < nums.length; i++) {
            swap(i, ind, nums);
            rec(nums, ind + 1);  // Fix: Pass 'ind + 1' instead of 'i + 1'
            swap(i, ind, nums);
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        ans = new ArrayList<>();
        rec(nums, 0);
        return ans;
    }
}
