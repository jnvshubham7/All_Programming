/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {

     unordered_map<int, char> m;
        for (int i = 1; i <= 26; i++) {
            m[i] = 'A' + i - 1;
        }
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] != '0') {
                dp[i] += dp[i - 1];
            }
            if (i > 1 && s[i - 2] != '0' && stoi(s.substr(i - 2, 2)) <= 26) {
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];

        
    }
};
// @lc code=end

