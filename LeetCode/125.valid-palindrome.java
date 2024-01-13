/*
 * @lc app=leetcode id=125 lang=java
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
    public boolean isPalindrome(String s) {

        String str = "";
        for(char ch : s.toCharArray())
        {
            if(Character.isLetterOrDigit(ch))
            {
                str+=ch;
            }
        }

        str = str.toLowerCase();

        int i=0, j = str.length()-1;

        while(i<j)
        {
            if(str.charAt(i)!=str.charAt(j))
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }

        return true;


        
    }
}
// @lc code=end

