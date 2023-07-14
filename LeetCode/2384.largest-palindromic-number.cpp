/*
 * @lc app=leetcode id=2384 lang=cpp
 *
 * [2384] Largest Palindromic Number
 */

// @lc code=start
class Solution {
public:
    string largestPalindromic(string num) {

        map<char, int> m;

        for(auto it: num)
        {
            m[it]++;
        }

        //map sort in reverse
        vector<pair<char, int>> v(m.begin(), m.end());
       sort(v.begin(), v.end());
        reverse(v.begin(), v.end());



        //print map
        // for(auto it: m)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }

        //print vector
        for(auto it: v)
        {

            if(it.second > 1)
            {
                cout << it.first << " " << it.second << endl;
            }
            
        }



        return "";



        
    }
};
// @lc code=end

