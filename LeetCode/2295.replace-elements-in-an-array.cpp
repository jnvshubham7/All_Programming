/*
 * @lc app=leetcode id=2295 lang=cpp
 *
 * [2295] Replace Elements in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

            

int n=nums.size();
sort(nums.begin(), nums.end());

int mini=nums[0];

int cnt=0;


for(int i=1;i<n;i++)
{

    if(nums[i]-mini>k)
    {
        mini=nums[i];
        cnt++;
    }


    // if(nums[i]-mini>=k)
    // {
    //     cnt++;
    //     mini=nums[i];
    // }
}



// while(n--)
// {
//     if(nums[n]>mini+k)
//     {
//         cnt++;
//         mini=nums[n];
//     }

// }


return cnt+1;
        
    }
};
// @lc code=end

