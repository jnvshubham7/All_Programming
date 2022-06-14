/*
 * @lc app=leetcode id=946 lang=cpp
 *
 * [946] Validate Stack Sequences
 */

// @lc code=start
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

         stack<int> s;
        int i = 0;
        for (int x : pushed) {
            s.push(x);
            while (!s.empty() && s.top() == popped[i]) {
                s.pop();
                i++;
            }
        }
        return s.empty();
        
    }
};
// @lc code=end

