/*
 * @lc app=leetcode id=217 lang=java
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
    public boolean containsDuplicate(int[] nums) {

        Set<Integer> st = new HashSet<>();

        // for (int i = 0; i < nums.length; i++) {
        //     if(st.contains(nums[i]))
        //     {
        //         return true;
        //     }
        //     else {
        //         st.add(nums[i]);
        //     }
        
        // }


        for (int it:nums)
        {
            if(st.contains(it))
            {
                return true;
            }
            else {
                st.add(it);
            }
        }

     


        return false;
    }
}
// @lc code=end

