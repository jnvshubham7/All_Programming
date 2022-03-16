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
        

        //push string in unordered_map with index
        // unordered_map<char, int> m;
        // for(int i = 0; i < s.size(); i++)
        //     m[s[i]] = i;

        // //stack to store indexes
        // stack<int> st;

        // //iterate through string
        // for(int i = 0; i < s.size(); i++)
        // {
        //     //if open bracket push index
        //     if(s[i] == '(')
        //         st.push(i);
        //     //if close bracket
        //     else if(s[i] == ')')
        //     {
        //         //if stack is empty, push index
        //         if(st.empty())
        //             st.push(i);
        //         //if stack is not empty
        //         else
        //         {
        //             //pop index from stack
        //             int index = st.top();
        //             st.pop();
        //             //if index is greater than current index, push index
        //             if(m[s[index]] > m[s[i]])
        //                 st.push(i);
        //         }
        //     }
        // }

        // //return stack
        // string ans = "";
        // while(!st.empty())
        // {
        //     int index = st.top();
        //     st.pop();
        //     ans += s[index];
        // }


        // //return valid string after removing invalid indexes
        // string ans = "";
        // while(!st.empty())
        // {
        //     int index = st.top();
        //     st.pop();
        //     ans += s[index];
        // }

        // string ans = "";
        // while(!st.empty())
        // {
        //     int index = st.top();
        //     st.pop();
        //     ans += s[index];
        // }
        // return ans;

        // string ans = "";
        // while(!st.empty())
        // {
        //     int index = st.top();
        //     st.pop();
        //     ans += s[index];
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;


        //iterate through string
        // for(int i = 0; i < s.size(); i++)
        // {
        //     //if index is not in stack, remove
        //     if(!st.empty() && m[s[i]] > m[s[st.top()]])
        //         s[i] = '*';
        // }

        // //iterate through string
        // for(int i = 0; i < s.size(); i++)
        // {
        //     //if *, remove
        //     if(s[i] == '*')
        //         s.erase(s.begin() + i);
        // }

        // return s;


        //push '(' ')' in unordered_map with index 
        // unordered_map<char, int> m;
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] == '(') m[s[i]] = i;
        //     else if(s[i] == ')') m[s[i]] = i;
        // }

        // //remove ')' if '(' is not found
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] == ')' && m.find('(') == m.end()) s[i] = '*';
        // }

        // //remove '(' if ')' is not found
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] == '(' && m.find(')') == m.end()) s[i] = '*';
        // }

        // //return valid string
        // string res = "";
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] != '*') res += s[i];
        // }
        // return res;


        // unordered_map<char, int> m;
        // for(int i = 0; i < s.size(); i++)
        //     m[s[i]] = i;



        // vector<int> v;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('||s[i]==')'){
        //         v.push_back(i);
        //     }
        // }

        //from 1st to last and last to 1st check same position is valid or not 
        //if not valid then remove that character
        //if valid then move to next character
        //if all characters are invalid then return empty string
        //if all characters are valid then return string










//at same time check if the character is valid or not 
//if valid then move to next character
//if not valid then remove that character









        // int n = s.length();
        // int i = 0, j = n - 1;
        // while (i <= j) {
        //     if (s[i] == ')') {
        //         if (s[j] == '(') {
        //             s[i] = '*';
        //             s[j] = '*';
        //         } else {
        //             j--;
        //         }
        //     }

        //     else if (s[i] == '(') {
        //         if (s[j] == ')') {
        //             s[i] = '*';
        //             s[j] = '*';
        //         } else {
        //             i++;
        //         }
        //     }

        //     else {
        //         i++;
        //         j--;
        //     }
          
        // }
        // string res = "";
        // for (int i = 0; i < n; i++) {
        //     if (s[i] != '*') {
        //         res += s[i];
        //     }
        // }
        // return res;

        
    }
};