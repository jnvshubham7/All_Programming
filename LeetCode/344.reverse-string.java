/*
 * @lc app=leetcode id=344 lang=java
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
    public void reverseString(char[] s) {

        char[] temp = new char[s.length];

        for (int i = 0; i < s.length; i++) {
            temp[i] = s[s.length - i - 1];
        }

        for (int i = 0; i < s.length; i++) {
            s[i] = temp[i];
        }

    }
}
// @lc code=end
