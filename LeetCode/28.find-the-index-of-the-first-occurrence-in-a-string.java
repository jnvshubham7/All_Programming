/*
 * @lc app=leetcode id=28 lang=java
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
    public int strStr(String s1, String s2) {

        int ind = -1;

        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == s2.charAt(0)) {
                ind = i;
                int j = 0;
                while (i < s1.length() && j < s2.length() && s1.charAt(i) == s2.charAt(j)) {
                    i++;
                    j++   ;
                } 

                if (j == s2.length()) {
                    return ind;
                } else {
                    i = ind;
                    ind = -1;
                }

            }
        }

        return ind;

    }
}
// @lc code=end
