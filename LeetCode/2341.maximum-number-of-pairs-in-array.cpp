/*
 * @lc app=leetcode id=2341 lang=cpp
 *
 * [2341] Maximum Number of Pairs in Array
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {

        int n=nums.size();

        unordered_map<int, int> m;

        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }

        //print map
        for(auto it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }

        int pair=0;

        //find how many second numberin map ==2
        for(auto it=m.begin();it!=m.end();it++)
        {

            if(it->second%2==0)
            {
                pair+=it->second/2;
            }
           
            else
            {
                pair+=(it->second-1)/2;
            }
        }

        vector<int> ans;
        ans.push_back(pair);
        ans.push_back(n-2*pair);
        return ans;
        
    }
};
// @lc code=end

