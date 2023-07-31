/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start





class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        vector<bool> dp(s.length() + 1);
        return rec(s, wordDict, 0, dp);
    }

private:
    bool rec(const string& s, const vector<string>& wordDict, int start, vector<bool>& dp) {
        // Base case: If we have reached the end of the string, return true
        if (start == s.length()) {
            
        }

       

        // Check if the string from the current index can be segmented
        for (int i = start; i < s.length(); i++) {
            string prefix = s.substr(start, i - start + 1);

            // If the prefix is present in the word dictionary, recursively check the remaining string
            if (find(wordDict.begin(), wordDict.end(), prefix) != wordDict.end() &&
                rec(s, wordDict, i + 1, dp)) {
                dp[start] = true;
            }
        }

        // If no segmentation is possible, return false
        return dp[start] = false;
    }
};





// @lc code=end
