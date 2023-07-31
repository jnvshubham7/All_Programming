/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {

        int n=s.size();

        stack <char> st_left;
        stack <char> st_right;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st_left.push(s[i]);
            }
            else
            {
                if(st_left.empty())
                {
                    st_right.push(s[i]);
                }
                else
                {
                    st_left.pop();
                }
            }
        }

        return st_left.size()+st_right.size();

    }
};
// @lc code=end

