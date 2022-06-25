/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {

       if(s.size() == 0)
       {
           return true;
       }
       if(s.size() % 2 != 0)
       {
           return false;
       }
         stack<char> st;
            int n=s.size();

            for(int i=0;i<s.size();i++)
            {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<') 
                st.push(s[i]);
                else{
                    if(st.empty()) {
                        return false;
                    }
                    else if(s[i] == ')' && st.top() == '(') st.pop();
                    else if(s[i] == ']' && st.top() == '[') st.pop();
                    else if(s[i] == '}' && st.top() == '{') st.pop();
                    else if(s[i] == '>' && st.top() == '<') st.pop();
                    else 
                    {
                        return false;
                    }
                }
            }

            if(st.empty()) return true;
            else return false;
        
    }
};
// @lc code=end























































 //  //from first and last oder is same ()[]{}

        // if (s.size() % 2 != 0) return false;

        // stack<char> st;

        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        //         st.push(s[i]);
        //     } else {
        //         if (st.empty()) return false;
        //         if (s[i] == ')' && st.top() == '(') st.pop();
        //         else if (s[i] == ']' && st.top() == '[') st.pop();
        //         else if (s[i] == '}' && st.top() == '{') st.pop();
        //         else return false;
        //     }
        // }
        // return st.empty();