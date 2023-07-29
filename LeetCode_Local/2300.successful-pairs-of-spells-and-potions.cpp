/*
 * @lc app=leetcode id=2300 lang=cpp
 *
 * [2300] Successful Pairs of Spells and Potions
 */

// @lc code=start
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> ans;
        int m=potions.size();

        for(auto s:spells)
        {
           int i=0;
           int j=m-1;

           while(i<=j)
           {
            int mid=(i+j)/2;
            if((long long)s*potions[mid]>=success)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
           



           }
              ans.push_back(m-i);
        }
        return ans;
        
    }
};
// @lc code=end

