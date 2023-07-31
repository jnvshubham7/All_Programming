/*
 * @lc app=leetcode id=273 lang=cpp
 *
 * [273] Integer to English Words
 */

// @lc code=start
class Solution {
public:
  
          string single_digits[20] = {"Zero",    "One",       "Two",      "Three",
                              "Four",    "Five",      "Six",      "Seven",
                              "Eight",   "Nine",      "Ten",      "Eleven",
                              "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                              "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

  string tens_multiple[10] = {"",      "",      "Twenty",  "Thirty", "Forty",
                              "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

  string generate(int num) {
    string ans = "";
    int number = num / 100;
    if (number != 0)
      ans += single_digits[number] + " " + "Hundred ";
    number = num % 100;

    if (number >= 20) {
      if (num % 10 != 0)
        ans +=
            tens_multiple[number / 10] + " " + single_digits[number % 10] + " ";
      else
        ans += tens_multiple[number / 10] + " ";
    } else {
      if (number == 0)
        return ans;
      ans += single_digits[number] + " ";
    }

    return ans;
 }

  string numberToWords(int num) {
    if (num == 0)
      return "Zero";
    string ans = "";
    bool flag = false;
    int number = num / 1000000000;
    if (number != 0)
      ans += single_digits[number] + " " + "Billion ";
    num = num % 1000000000;

    number = num / 1000000;
    if (number != 0)
      ans += generate(number) + "Million ";
    num = num % 1000000;

    number = num / 1000;
    if (number != 0)
      ans += generate(number) + "Thousand ";
    num = num % 1000;

    ans += generate(num);

    ans.pop_back();
    return ans;

        
    }
};
// @lc code=end

