/*
 * @lc app=leetcode id=2278 lang=cpp
 *
 * [2278] Percentage of Letter in String
 */

// @lc code=start
class Solution {
public:
    int percentageLetter(string s, char letter) {

          int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == letter) {
                count++;
            }
        }

        //calculate percentage
        int percentage = count * 100 / s.length();

        return percentage;
        
    }
};
// @lc code=end

