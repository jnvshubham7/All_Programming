/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {

        int n=s.size();

        stack<char> st;
        string res;

        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
            {
                if(st.size()>0)
                {
                    res+=s[i];
                }
                st.push(s[i]);
            }
            else
            {
                if(st.size()>1)
                {
                    res+=s[i];
                }
                st.pop();
            }
        }

        return res;
        
    }
};
// @lc code=end

