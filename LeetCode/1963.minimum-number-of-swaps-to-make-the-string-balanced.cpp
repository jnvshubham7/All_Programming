/*
 * @lc app=leetcode id=1963 lang=cpp
 *
 * [1963] Minimum Number of Swaps to Make the String Balanced
 */

// @lc code=start
class Solution {
public:
    int minSwaps(string s) {

            stack<char> st;
        int swaps = 0;
        
        for (char c : s) {
            if (c == '[') {
                st.push(c);
            } else { // c == ']'
                if (!st.empty()) {
                    st.pop();
                } else {
                    swaps++;
                }
            }
        }
        
        return swaps;
        
    }
};
// @lc code=end

