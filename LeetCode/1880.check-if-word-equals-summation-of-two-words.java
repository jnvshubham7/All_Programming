/*
 * @lc app=leetcode id=1880 lang=java
 *
 * [1880] Check if Word Equals Summation of Two Words
 */

// @lc code=start
class Solution {
    public boolean isSumEqual(String fw, String sw, String tw) {

        int n1 = fw.length();
        int n2 = sw.length();
        int n3 = tw.length();

        int num1 = 0;
        int num2 = 0; 
        int num3 = 0;

        for (int i = 0; i < n1; i++) {
            num1 = num1 * 10 + (fw.charAt(i) - 'a');
        }
        for (int i = 0; i < n2; i++) {
            num2 = num2 * 10 + (sw.charAt(i) - 'a');
        }

        for(int i=0;i<n3;i++){
            num3=num3*10+(tw.charAt(i)-'a');
        }

        return num1+num2==num3;



        



        
    }
}
// @lc code=end

