/*
 * @lc app=leetcode id=2274 lang=cpp
 *
 * [2274] Maximum Consecutive Floors Without Special Floors
 */

// @lc code=start
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

         vector<int> nums;
    for(int i=bottom;i<=top;i++)
    {
        if(find(special.begin(),special.end(),i)==special.end())
        {
            nums.push_back(i);
        }



   

        
    }

    sort(nums.begin(),nums.end());

    int count=0;
    //find maximum consecutive number in whole vector

    for(int i=0;i<nums.size();i++)
    {
        int c=nums[i];
        int n=nums[i+1];
        if(c+1==n)
        {
            count++;
        }
        else
        {
            count=0;
        }   
    }

    return count;
        
    }
};
// @lc code=end

