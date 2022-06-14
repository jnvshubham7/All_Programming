/*
 * @lc app=leetcode id=2124 lang=cpp
 *
 * [2124] Check if All A's Appears Before All B's
 */

// @lc code=start
class Solution {
public:
    bool checkString(string s) {

        for(int i = 1; i < s.size(); i++){
			if(s[i - 1] == 'b' && s[i] == 'a'){
				return false;
			}
		}
		return true;
        
    }
};
// @lc code=end

