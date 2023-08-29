/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {

        int max = 0;
        rec(s, 0, max);
        return max;

                
        
    }


    void rec(string s, int start, int& max)
    {

        if (start == s.size())
            return;

        for (int i = start; i < s.size(); i++)
        {
            if (is___valid(s.substr(start, i - start + 1)))
            {
                if (i - start + 1 > max)
                    max = i - start + 1;
            }
        }

        rec(s, start + 1, max);
       
    }

    bool is___valid(string s)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                count++;
            else
                count--;
            if (count < 0)
                return false;
        }
        return count == 0;
    }


};
// @lc code=end

