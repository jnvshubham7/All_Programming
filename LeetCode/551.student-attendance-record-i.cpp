/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {

        unordered_map<char, int> m;
        for (auto c : s) {
            m[c]++;
        }
        if (m['A'] > 1) return false;

        if(s.size() < 2) return true;

        for(int i = 0; i < s.size() - 2; i++) {
            if (s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') return false;
        }
        return true;
       

        
    }
};
// @lc code=end

