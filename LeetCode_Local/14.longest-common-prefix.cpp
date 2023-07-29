/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        if(str.size() == 0)
            return "";

        string prefix = str[0];
        

        for(int i = 1; i < str.size(); i++) {
            for(int j = 0; j < prefix.length(); j++) {
                if(prefix[j] != str[i][j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }

        return prefix;

     
        
    }
};
// @lc code=end

