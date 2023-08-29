/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string s, string x) {

        int n=s.length();
        int m=x.length();

        char ch=x[0];

        int i=0;
        int j=0;


        while(i<n)
        {
            if(s[i]==ch)
            {
                if(s.substr(i,m)==x)
                {
                    return i;
                }
                else
                {
                    i++;
                }
            }
            
            else
            {
                i++;
            }

        }


        return -1;


       



       
      
    }
};
// @lc code=end

