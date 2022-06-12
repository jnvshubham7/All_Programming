/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]=i;

        // }

       for(int i=0;i<nums.size();i++)
        {
          //  mp[nums[i]]=i;
            if(mp.find(target-nums[i])!=mp.end())
            {
                return {i,mp[target-nums[i]]};
            }
            mp[nums[i]]=i;
        }

        return {};

        // vector<int> v;

        // int i=0;
        // int j=nums.size()-1;

        // while(i<j)
        // {
        //     if(nums[i]+nums[j]==target)
        //     {
        //         v.push_back(i);
        //         v.push_back(j);

        //         return v;

        //     }
        //     else if(nums[i]+nums[j]<target)
        //     {
        //         i++;

        //     }

        //     else {
        //        j--;
        //     }
        // }

        // return v;


        
        
    }
};
// @lc code=end

