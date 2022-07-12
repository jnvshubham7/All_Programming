/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {

        int n=s.size();
        stack <char> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }

            else if(st.top()==s[i])
            {
                st.pop();
            }
           
            // else if(st.top()==tolower(s[i]))
           
            // {
            //     //erase that char in s
            //     s.erase(s.begin()+i);
            //     st.pop();
            // }
            // else if(st.top()==toupper(s[i]))
            // {
            //     //erase that char in s
            //     s.erase(s.begin()+i);
            //     st.pop();
            // }
            else
            {
                st.push(s[i]);
            }
           
        }

        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};
// @lc code=end

