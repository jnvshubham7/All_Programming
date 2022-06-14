/*
 * @lc app=leetcode id=2177 lang=cpp
 *
 * [2177] Find Three Consecutive Integers That Sum to a Given Number
 */

// @lc code=start
class Solution {
public:
    vector<long long> sumOfThree(long long num) {

         if(num%3==0){
           //return num/3-1,num/3,num/3+1
              return {num/3-1,num/3,num/3+1};
       }
       else {
           //return empty array
              return {};
       }
        
    }
};
// @lc code=end

