/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
   vector<vector<int>>ans;
    void permutation(vector<int>&nums, int l,int r)

    {
        if(l==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=l;i<=r;i++)
        {
            swap(nums[i],nums[l]);
            permutation(nums, l+1, r);
            swap(nums[i],nums[l]);

        }
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        permutation(nums,0, nums.size()-1);

        return ans;
    }
};
// @lc code=end

