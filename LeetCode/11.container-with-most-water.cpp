/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
          int ans=0;
        int left=0;
        int right=height.size()-1;
        while(left<=right){
            ans=max(min(height[left], height[right])*(right-left), ans);

            if(height[left]<height[right]){
                left++;

            }

            else {
                right--;
            }


        }

        return ans;
        
    }
};
// @lc code=end

