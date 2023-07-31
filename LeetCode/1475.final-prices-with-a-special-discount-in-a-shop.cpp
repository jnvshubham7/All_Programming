/*
 * @lc app=leetcode id=1475 lang=cpp
 *
 * [1475] Final Prices With a Special Discount in a Shop
 */

// @lc code=start
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n=prices.size();

        vector<int> ans(n);

        stack <int> st;

        st.push(0);

        for(int i=n-1;i>=0;i--)
        {
            int curr=prices[i];

            while(curr<st.top())
            {

                st.pop();
                
            }

            ans[i]=curr-st.top();

            st.push(curr);


           
        }

        return ans;


























        // for(int i=0;i<n;i++)
        // {
        //   for(int j=i+1;j<n;j++)
        //   {
        //       if(prices[j]<=prices[i])
        //       {
        //           ans[i]=prices[i]-prices[j];
        //           break;
        //       }

        //       else
        //       {
        //             ans[i]=prices[i];
        //       }
        //   }
        // }

        // ans[n-1]=prices[n-1];

        return ans;




        
    }
};
// @lc code=end

