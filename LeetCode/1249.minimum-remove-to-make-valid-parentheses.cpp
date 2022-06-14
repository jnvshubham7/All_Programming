/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    string minRemoveToMakeValid(string s) {

         int n = s.size();
        vector<int> stack;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                stack.push_back(i);
            } else if (s[i] == ')') {
                if (stack.empty()) {
                    s[i] = '*';
                } else {
                    stack.pop_back();
                }
            }
        }
        for (int i = 0; i < stack.size(); i++) {
            s[stack[i]] = '*';
        }
        string res;
        for (int i = 0; i < n; i++) {
            if (s[i] != '*') {
                res += s[i];
            }
        }
        return res;
        
    }
};
// @lc code=end

