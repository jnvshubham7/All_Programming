/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int, int> m;

        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }

        int i = 0;
        for(auto it : m)
        {
            if(it.second >= 2)
            {
                nums[i] = it.first;
                i++;
                nums[i] = it.first;
                i++;
            }
            else
            {
                nums[i] = it.first;
                i++;
            }
        }

        return i;



     
    }
};
// @lc code=end

