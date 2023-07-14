/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
#include <string>
#include <climits>

class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;
        int sign = 1;
        long result = 0;
        int len = s.length();

        // Skip leading white spaces
        while (i < len && s[i] == ' ')
            i++;

        // Handle the sign if present
        if (i < len && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits to integer until a non-digit character is encountered
        while (i < len && std::isdigit(s[i])) {

            // Handle overflow
            result = result * 10 + (s[i] - '0');
            if (result > INT_MAX) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            i++;
           
        }

        return (int)(sign * result);
    }
};

// @lc code=end

