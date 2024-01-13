/*
 * @lc app=leetcode id=1002 lang=java
 *
 * [1002] Find Common Characters
 */

// @lc code=start

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {
    public List<String> commonChars(String[] words) {

        List<String> lst = new ArrayList<>();

        Map<Character, Integer> mp = new HashMap<>();

        for (char it : words[0].toCharArray()) {
            mp.put(it, mp.getOrDefault(it, 0) + 1);
        }

        for(int i = 1; i < words.length; i++)
        {
            for(char it: words[i].toCharArray())
            {
                mp.put(it, mp.getOrDefault(it, 0));
            }

        }

        












        //print(mp);

        // for( Map<Character, Integer>  it : mp)
        // {
        //     //print both 

        // }



        // mp.forEach((k, v) -> System.out.println("Key = "
        //         + k + ", Value = " + v));


        






        return lst;






    }
}
// @lc code=end

