/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {

        string ans="";
        string temp="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(temp.length()>0)
                {
                    ans=temp+" "+ans;
                    temp="";
                }
            }
            else
            {
                temp+=s[i];
            }
        }
        if(temp.length()>0)
        {
            ans=temp+" "+ans;
        }
        
        if(ans[ans.length()-1]==' ')
        {
           ans.erase(ans.length()-1,1);
        }
        return ans;

       
    }
};
// @lc code=end



