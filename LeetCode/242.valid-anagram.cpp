/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<wchar_t, int> mp1;
        unordered_map<wchar_t, int> mp2;

        // Populate the frequency maps for string s and t
        for (wchar_t c : s) {
            mp1[c]++;
        }
        for (wchar_t c : t) {
            mp2[c]++;
        }

        // Check if the frequency maps are equal
        return mp1 == mp2;
    }
};

// @lc code=end

