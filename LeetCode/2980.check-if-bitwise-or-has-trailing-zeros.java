/*
 * @lc app=leetcode id=2980 lang=java
 *
 * [2980] Check if Bitwise OR Has Trailing Zeros
 */

// @lc code=start
class Solution {
    public boolean hasTrailingZeros(int[] nums) {

        List<Integer> list = new ArrayList<>();

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                list.add(nums[i] | nums[j]);
            }
        }

        // print list

        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }

        List<String> ans = new ArrayList<>();

        // convert to binary

        for (int i = 0; i < list.size(); i++) {
            int x = list.get(i);

            String s = Integer.toBinaryString(x);

            System.out.println(s);

            ans.add(s);

        }

        for(int i=0;i<ans.size();i++)
        {
            String s = ans.get(i);

           if(s.charAt(s.length()-1) == '0') return true;

        }

        

          




        // for(int i=0;i<list.size();i++)
        // {
        // if(list.get(i) == 0) return true;
        // }

        return false;

    }
}
// @lc code=end
