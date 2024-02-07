/*
 * @lc app=leetcode id=128 lang=java
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
    public int longestConsecutive(int[] nums) {

        int n = nums.length;
        if (n == 0)
            return 0;

       //nums to list 

       List<Integer> list = new ArrayList<>();

         for(int i=0;i<n;i++){
              list.add(nums[i]);
         }


        //sort list

        int mxx = Collections.max(list);

        //counting sort

        int[] freq = new int[mxx+1];

      










        

       

    }
}
// @lc code=end
