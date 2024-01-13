/*
 * @lc app=leetcode id=20 lang=java
 *
 * [20] Valid Parentheses
 */

// @lc code=start

import java.util.Stack;

class Solution {
    public boolean isValid(String s) {

        Stack<Character> st = new Stack<>();

        for (char ch : s.toCharArray()) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else if (ch == ')' && !st.isEmpty() && st.peek() == '(') {
                st.pop();
            }

            else if (ch == '}' && !st.isEmpty() && st.peek() == '{') {
                st.pop();
            }

            else if (ch == ']' && !st.isEmpty() && st.peek() == '[') {
                st.pop();
            }

            else {
                return false;
            }

        }

        return st.isEmpty();
        //return st.empty();
        






        

        // Stack<Character> stack = new Stack<Character>();

        // for (char c : s.toCharArray()) {
        // if (c == '(' || c == '{' || c == '[')
        // stack.push(c);

        // else if (c == ')' && !stack.isEmpty() && stack.peek() == '(')
        // stack.pop();

        // else if (c == '}' && !stack.isEmpty() && stack.peek() == '{')
        // stack.pop();

        // else if (c == ']' && !stack.isEmpty() && stack.peek() == '[')
        // stack.pop();

        // else
        // return false;
        // }

        // return stack.isEmpty();

    }
}
// @lc code=end
