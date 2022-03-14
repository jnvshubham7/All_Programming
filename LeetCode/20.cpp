class Solution {
public:
    bool isValid(string s) {


        //from first and last oder is same ()[]{}

        if (s.size() % 2 != 0) return false;

        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty()) return false;
                if (s[i] == ')' && st.top() == '(') st.pop();
                else if (s[i] == ']' && st.top() == '[') st.pop();
                else if (s[i] == '}' && st.top() == '{') st.pop();
                else return false;
            }
        }
        return st.empty();

        
















        // stack<char> st;
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        //         st.push(s[i]);
        //     } else {
        //         if (st.empty()) {
        //             return false;
        //         }
        //         char c = st.top();
        //         st.pop();
        //         if (c == '(' && s[i] != ')') {
        //             return false;
        //         }
        //         if (c == '[' && s[i] != ']') {
        //             return false;
        //         }
        //         if (c == '{' && s[i] != '}') {
        //             return false;
        //         }
        //     }
        // }
        // return st.empty();


        
    }
};