/*
 * @lc app=leetcode id=917 lang=java
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
class Solution {
    public String reverseOnlyLetters(String s) {

        String s1 = "";

        for (char ch : s.toCharArray()) {
            if (Character.isLetter(ch)) {
                s1 += ch;
            }
        }

        s1 = new StringBuilder(s1).reverse().toString();

        int i = 0;

        String s2 = "";

        for (char ch : s.toCharArray()) {
            if (Character.isLetter(ch)) {
                s2 += s1.charAt(i);
                i++;
            } else {
                s2 += ch;
            }
        }

        return s2;

    }
}
// @lc code=end
