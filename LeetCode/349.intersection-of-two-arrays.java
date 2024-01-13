import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
/*
 * @lc app=leetcode id=349 lang=java
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {

        int n1 = nums1.length;
        int n2 = nums2.length;

        Set<Integer> st1 = new HashSet<>();
        Set<Integer> st2 = new HashSet<>();

        for (int i : nums1) {
            st1.add(i);
        }

        for (int i : nums2) {
            st2.add(i);
        }

        st1.retainAll(st2);

        int[] ans = new int[st1.size()];
        int i = 0;
        for (int it : st1) {
            ans[i++] = it;
        }

        return ans;

    }
}
// @lc code=end
