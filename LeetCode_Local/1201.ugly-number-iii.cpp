/*
 * @lc app=leetcode id=1201 lang=cpp
 *
 * [1201] Ugly Number III
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {

        int k = a*b*c;
        int n2 = b*c;
        int n3 = a*c;
        int n5 = a*b;
        int n2_cnt = 0;
        int n3_cnt = 0;
        int n5_cnt = 0;
        vector<int> ugly_nums;
        ugly_nums.push_back(1);
        int i = 0;
        while(ugly_nums.size() < n)
        {
            int mn = min(min(n2, n3), n5);
            if(mn == n2)
            {
                n2_cnt++;
                ugly_nums.push_back(n2_cnt*n2);
            }
            else if(mn == n3)
            {
                n3_cnt++;
                ugly_nums.push_back(n3_cnt*n3);
            }
            else
            {
                n5_cnt++;
                ugly_nums.push_back(n5_cnt*n5);
            }
           

        }
        return ugly_nums[n-1];
        
    }
};
// @lc code=end

