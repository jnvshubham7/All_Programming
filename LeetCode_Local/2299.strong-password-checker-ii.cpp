/*
 * @lc app=leetcode id=2299 lang=cpp
 *
 * [2299] Strong Password Checker II
 */

// @lc code=start
class Solution {
public:
    bool strongPasswordCheckerII(string password) {

        int n = password.size();
        int count = 0;
       int lower_case = 0;
         int upper_case = 0;
            int digit = 0;
            int special = 0;

            if(n<8)
            {
                return false;
            }
        //if adjacent characters are same, return false
        for(int i=0;i<n-1;i++)
        {
            if(password[i]==password[i+1])
            {
                return false;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(password[i]>='a'&&password[i]<='z')
            {
                lower_case++;
            }
            else if(password[i]>='A'&&password[i]<='Z')
            {
                upper_case++;
            }
            else if(password[i]>='0'&&password[i]<='9')
            {
                digit++;
            }
            else
            {
                special++;
            }

        }

        //check all greater then 0
        if(lower_case==0||upper_case==0||digit==0||special==0)
        {
            return false;
        }

        return true;

        
    }
};
// @lc code=end

