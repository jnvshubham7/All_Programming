/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();

        

        int i=0;

        int flag=1;

        while(n--)
        {
            int temp=nums[i];
            if(temp>n)
            {
               flag=0;
               break;
            }
            if(temp==0)
            {

                if(i!=(n-1))
                {
                    return false;
                }

                return true;
                break;
            }

            i+=temp;

           // if(i==n-1)
        }

        return true;




        
    }
};
// @lc code=end

