/*
 * @lc app=leetcode id=17 lang=java
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
    public List<String> letterCombinations(String d) {

        String[] mp  = new String[] {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        List<String> ans = new ArrayList<>();

        if(d.length() == 0) return ans;

        Set<String> set = new HashSet<>();

        StringBuilder sb = new StringBuilder();

        dfs(d, 0, mp, set, sb);

        ans.addAll(set);

        return ans;



        


        
    }

    public void dfs(String d, int idx, String[] mp, Set<String> set, StringBuilder sb){

        if(idx == d.length()){
            set.add(sb.toString());
            return;
        }

        int digit = d.charAt(idx) - '0';

        for(int i = 0; i < mp[digit].length(); i++){
            sb.append(mp[digit].charAt(i));
            dfs(d, idx + 1, mp, set, sb);
            sb.deleteCharAt(sb.length() - 1);
        }

    }



}
// @lc code=end

