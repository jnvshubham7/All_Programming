/*
 * @lc app=leetcode id=2283 lang=cpp
 *
 * [2283] Check if Number Has Equal Digit Count and Digit Value
 */

// @lc code=start
class Solution {
public:
    bool digitCount(string num) {

        

  vector<int> digit;
    for (int i = 0; i < num.size(); i++) {
        digit.push_back(num[i]-'0');
    }


    unordered_map<int, int> freq;


//store frequency of each digit in unordered_map
    for (int i = 0; i < digit.size(); i++) {
        freq[digit[i]]++;
    }

//     num[0] = '1'. The digit 0 occurs once in num.
// num[1] = '2'. The digit 1 occurs twice in num.
// num[2] = '1'. The digit 2 occurs once in num.
// num[3] = '0'. The digit 3 occurs zero times in num.
// The condition holds true for every index in "1210", so return true.


for(int i=0;i<num.size();i++){
    if(freq[i]!=digit[i]){
        return false;
    }
}


    return true;

        
    }
};
// @lc code=end

