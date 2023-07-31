/*
 * @lc app=leetcode id=1269 lang=cpp
 *
 * [1269] Number of Ways to Stay in the Same Place After Some Steps
 */

// @lc code=start
class Solution {
public:
    int numWays(int steps, int arrLen) {

        long long count=0;

      while(num1!=0 ){
        if(num1>=num2 ){
          num1=num1-num2;
          count++;
          
        }
        else {
          num2=num2-num1;
          count++;
          // if(num2==0)
          // break;
        }

        if(num1==0 || num2==0){
          break;
        }


      }
      return count;
        
    }
};
// @lc code=end

