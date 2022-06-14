/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        //return the middle element
        return nums[nums.size()/2];

        //find the most frequent element
        //unordered_map<int,int> m;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int max=0;
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
                ans=it->first;
            }
        }
        return ans;
    
    
    


        //find the majority element

        // for(int i=0;i<nums;i++)
        // {
        //     int count=0;
        //     for(int j=0;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             count++;
        //         }
        //     }
        //     if(coutn>nums.size()/2)
        //     {
        //         return nums[i];
        //     }

        //     //find the majority element

            
        //     if(nums[i]==nums[i+1])   
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         count=0;
        //     }

        // }
        
    }
};
// @lc code=end

