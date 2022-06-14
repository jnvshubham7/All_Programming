/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {

         vector<int> digit;
        while(num != 0){
            digit.push_back(num%10);
            num = num/10;
        }
        int sum = 0;
        for(int i = 0; i < digit.size(); i++){
            sum += digit[i];
        }
        while(sum >= 10){
            sum = addDigits(sum);
        }
        return sum;
        
    }
};
// @lc code=end

