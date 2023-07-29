/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {

        if(n == 1)
            return "1";

        string s = countAndSay(n - 1);

        string ans = "";

        int count = 1;

        for(int i = 0; i < s.length(); i++) {
            if(i == s.length() - 1 || s[i] != s[i + 1]) {
                ans += to_string(count) + s[i];
                count = 1;
            }
            else {
                count++;
            }
        }

        return ans;


        
    }
};
// @lc code=end

