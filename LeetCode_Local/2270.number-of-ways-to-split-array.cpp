/*
 * @lc app=leetcode id=2270 lang=cpp
 *
 * [2270] Number of Ways to Split Array
 */

// @lc code=start
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        
int count=0;

long long int  right_sum=0;
long long int  left_sum=0;

for(int i=0;i<nums.size();i++)
{
    right_sum += nums[i];
}


for(int i=0;i<nums.size()-1;i++)
{
    left_sum += nums[i];

    right_sum -= nums[i];

    if(left_sum>=right_sum)
    count++;

}

return count;

        
    }
};
// @lc code=end

