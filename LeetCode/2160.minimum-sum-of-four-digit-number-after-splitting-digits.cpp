/*
 * @lc app=leetcode id=2160 lang=cpp
 *
 * [2160] Minimum Sum of Four Digit Number After Splitting Digits
 */

// @lc code=start
class Solution {
public:
    int minimumSum(int num) {

        int digits[4];
        int i = 0;
        while (num > 0) {
            digits[i++] = num % 10;
            num /= 10;
        }
        //sort the array
        sort(digits, digits + 4);
        //return array as int

        //create one string from digits array 1st digit and last digit
        string s = to_string(digits[0]) + to_string(digits[3]);
        

                //create one string from digits array 2nd digit and 3th digit
        string s1 = to_string(digits[1]) + to_string(digits[2]);

        //return the sum of two strings
        return stoi(s) + stoi(s1);
        
    }
};
// @lc code=end

