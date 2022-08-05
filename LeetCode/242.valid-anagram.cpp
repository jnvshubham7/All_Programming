/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (auto c : s) {
            mp1[c]++;
        }
        for (auto c : t) {
            mp2[c]++;
        }
        return mp1 == mp2;

        
    }
};
// @lc code=end

