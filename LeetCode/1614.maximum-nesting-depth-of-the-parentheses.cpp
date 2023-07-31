/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {

        int n=s.size();

        stack<string> st;

        int ans=0;
        int sz=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push("(");
            }


            if(s[i]==')')
                {
                    sz=st.size();

                    st.pop();
                    
                }

                ans=max(ans,sz);

                
               
            
        }

        return ans;

        
    }
};
// @lc code=end

