/*
 * @lc app=leetcode id=2643 lang=cpp
 *
 * [2643] Row With Maximum Ones
 */

// @lc code=start
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& x) {

        // int n=x.size();

        vector<int> ans(2,-1);

        // if(n==0)
        // return ans;

    int n=x.size();
    int m=x[0].size();

    int row=0;
    int one =0;

    int i=0;
    int j=0;

   //go to every row count the number of ones and update the max

    while(i<n)
    {
        j=0;
        one=0;
        while(j<m)
        {
            if(x[i][j]==1)
            one++;

            j++;
        }

        if(one>ans[1])
        {
            ans[0]=i;
            ans[1]=one;
        }

        i++;

    }

    return ans;











      

       


        
    }
};
// @lc code=end

