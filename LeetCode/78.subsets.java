import java.util.ArrayList;
import java.util.List;

// @lc code=start
class Solution {

    List<List<Integer>> v;

    void rec(int[] nums, List<Integer> temp, int ind) {
        if (ind == nums.length) {
            v.add(new ArrayList<>(temp)); // Create a new copy of the list
            return;
        }

        rec(nums, temp, ind + 1);
        temp.add(nums[ind]);
        rec(nums, temp, ind + 1);
        temp.remove(temp.size() - 1); // Backtrack by removing the last element
    }

    public List<List<Integer>> subsets(int[] nums) {
        v = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        rec(nums, temp, 0);
        return v;
    }
}
// @lc code=end
