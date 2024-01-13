/*
 * @lc app=leetcode id=350 lang=java
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start

import java.util.Arrays;
import java.util.List;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        int n1 = nums1.length;
        int n2 = nums2.length;

        int i = 0, j = 0;

        List<Integer> ans = new ArrayList<>();

        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                ans.add(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }

        }

        int[] arr = new int[ans.size()];

        for (int k = 0; k < ans.size(); k++) {
            arr[k] = ans.get(k);
        }

        return arr;

    }
}
// @lc code=end
