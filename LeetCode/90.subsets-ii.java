/*
 * @lc app=leetcode id=90 lang=java
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {


    List<List<Integer>> ans = new ArrayList<>();

    List<Integer> cur = new ArrayList<>();

    Set<List<Integer>> s= new HashSet<>();







    public List<List<Integer>> subsetsWithDup(int[] nums) {

        Arrays.sort(nums);

        rec(nums, 0, nums.length);

        return ans;



       
        
        
    }


    private void rec(int[] nums, int i, int n)
    {
        if(i==n)
        {
            if(!s.contains(cur))
            {
                ans.add(new ArrayList<>(cur));
                s.add()
            }

        }
    }





}
// @lc code=end

