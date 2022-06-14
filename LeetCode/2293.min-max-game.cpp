/*
 * @lc app=leetcode id=2293 lang=cpp
 *
 * [2293] Min Max Game
 */

// @lc code=start
class Solution {
public:
    int minMaxGame(vector<int>& nums) {

        
int n=nums.size();

//vector<int> newNums;


if(n==1)
{

    return nums[0];
}

while(n>1)
{
    n=n/2;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            nums[i]=min(nums[2*i],nums[2*i+1]);
        }
        else
        {
            nums[i]=max(nums[2*i],nums[2*i+1]);
        }




 
        
    }
}



    //return nums[n-1];

    return nums[0];
        
    }
};
// @lc code=end

