/*
 * @lc app=leetcode id=242 lang=java
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
    public boolean isAnagram(String s, String t) {

        int n1 = s.size();
        int n2 = t.size();

        Map<Character, Integer> mp = new HashMap<>();

        for (var it : s) {
            mp[it]++;
        }

        for (var it : t) {
            mp[it]--;
        }

        for (var it : mp) {
            if (it.second != 0) {
                return false;
            }
        }

        return true;

    }
}
// @lc code=end
