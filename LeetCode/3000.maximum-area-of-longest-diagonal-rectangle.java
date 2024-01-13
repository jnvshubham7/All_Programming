/*
 * @lc app=leetcode id=3000 lang=java
 *
 * [3000] Maximum Area of Longest Diagonal Rectangle
 */

// @lc code=start
class Solution {
    public int areaOfMaxDiagonal(int[][] x) {

        int ans=0;
        int n=x.length;

        HashMap<Integer, Integer> mp = new HashMap<>();

        //indx, area


        for(int i=0;i<n;i++)
        {

            int xx= Math.sqrt( Math.pow(x[i][0],2) + Math.pow(x[i][1],2) );

            mp.put(xx, i);

        
        }

        //sort 

        



    }
}
// @lc code=end

