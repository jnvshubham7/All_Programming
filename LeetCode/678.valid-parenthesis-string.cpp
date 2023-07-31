/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {

        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    return false;
                }
                else if(st.top() == '('){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else if(s[i] == '*'){
                if(st.empty()){
                    return false;
                }
                else if(st.top()==')'){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
           
        }

        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
// @lc code=end

