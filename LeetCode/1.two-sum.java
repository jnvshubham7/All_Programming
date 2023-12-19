/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start

import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {



        //Brute Force

        int n=nums.length;

        // for(int i=0;i<nums.length;i++)
        // {
        //     for(int j=i+1;j<nums.length;j++)
        //     {
        //         if(nums[j]==target-nums[i])
        //             return new int[] {i, j};
        //     }
        // }


        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[j]==target-nums[i])
        //         {
        //             return new int[] {i,j};
        //         }
        //     }
        // }












        //Two-pass Hash Table

        // HashMap<Integer, Integer> map = new HashMap<>();

        // for(int i=0;i<nums.length;i++)
        // {
        //     map.put(nums[i], i);
        // }

        // for(int i=0;i<nums.length;i++)
        // {
        //     int comp= target - nums[i];
        //     if(map.containsKey(map.get(comp)) && map.get(comp)!=i)
        //         return new int[] {i, map.get(comp)}; //map.get(comp) will return the index of the complement number (comp

        // }





// int n = nums.length;
        // HashMap<Integer, Integer> map = new HashMap<>();

        // for (int i = 0; i < n; i++) {
        //     map.put(nums[i], i);
        // }

        // for (int i = 0; i < n; i++) {
        //     int comp = target - nums[i];

        //     if (map.containsKey(comp) && map.get(comp) != i) {
        //         return new int[]{i, map.get(comp)};
        //     }
        // }

        // return new int[]{0, 0};



























        //One-pass Hash Table

        // HashMap<Integer, Integer> map = new HashMap<>();

        // for(int i=0;i<nums.length;i++)
        // {
        //     int complement = target - nums[i];
        //     if(map.containsKey(complement))
        //     {
        //         return new int[] {map.get(complement), i};
        //     }
        //     map.put(nums[i], i);
        // }



// int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int comp = target - nums[i];
            
            if (map.containsKey(comp)) {
                return new int[]{map.get(comp), i};
            }

            map.put(nums[i], i);
        }

        return new int[]{0, 0};












        //unordered map in C++ is hash map in Java

        // HashMap<Integer, Integer> map = new HashMap<>();

        // for(int i=0;i<nums.length;i++)
        // {
        //     int complement = target - nums[i];
        //     if(map.containsKey(complement))
        //     {
        //         return new int[] {map.get(complement), i};
        //     }
        //     map.put(nums[i], i);
        // }


        // HashMap<Integer, Integer> map = new HashMap<>();

        // for(int i=0;i<nums.length;i++)
        // {
        //     map.put(nums[i], i);
        // }

        // for(int i=0;i<nums.length;i++)
        // {
        //     int comp= target - nums[i];
        //     if(map.containsKey(map.get(comp)) && map.get(comp)!=i)
        //         return new int[] {i, map.get(comp)}; //map.get(comp) will return the index of the complement number (comp


        // }








        
    }
}
// @lc code=end

