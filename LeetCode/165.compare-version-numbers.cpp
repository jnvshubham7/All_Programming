/*
 * @lc app=leetcode id=165 lang=cpp
 *
 * [165] Compare Version Numbers
 */

// @lc code=start
class Solution {
public:
    int compareVersion(string v1, string v2) {

        int n1 = v1.length();
        int n2 = v2.length();

        int i = 0, j = 0;

        while(i < n1 || j < n2) {

            int num1 = 0, num2 = 0;

            while(i < n1 && v1[i] != '.') {
                num1 = num1 * 10 + (v1[i] - '0');
                i++;
            }

            while(j < n2 && v2[j] != '.') {
                num2 = num2 * 10 + (v2[j] - '0');
                j++;
            }

            if(num1 > num2)
                return 1;
            else if(num1 < num2)
                return -1;

            i++;
            j++;
        }

        return 0;




        


        
    }
};
// @lc code=end

