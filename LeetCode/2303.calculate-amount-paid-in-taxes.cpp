/*
 * @lc app=leetcode id=2303 lang=cpp
 *
 * [2303] Calculate Amount Paid in Taxes
 */

// @lc code=start
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {

        double tax = 0;

    vector<vector<int>> mp;
    for (int i = 0; i < brackets.size(); i++) {
      mp.push_back(brackets[i]);
    }

    if (mp[0][0] <= income) {
      tax = (mp[0][0] * mp[0][1]) / 100.0;
    //  income -= mp[0][0];
    } else {
    return  (income)*mp[0][1] / 100.0;
    }

    for (int i = 1; i < mp.size(); i++) {
      if ((mp[i][0]) <= income) {
      //  mp[i][0] = mp[i][0] - mp[i - 1][0];
        tax += ((mp[i][0]-mp[i-1][0]) * mp[i][1]) / 100.0;
       // income -= mp[i][0];
      } else {
        tax += ((income - mp[i - 1][0]) * mp[i][1]) / 100.0;

        break;
      }
    }
    return tax;
        
    }
};
// @lc code=end

