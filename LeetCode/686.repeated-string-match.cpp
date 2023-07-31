/*
 * @lc app=leetcode id=686 lang=cpp
 *
 * [686] Repeated String Match
 */

// @lc code=start
class Solution {
public:
    int repeatedStringMatch(string a, string b) {

        int n1 = a.length();
        int n2 = b.length();

        int count = 1;

        string temp = a;

        while(temp.length() < n2) {
            temp += a;
            count++;
        }

        if(temp.find(b) != string::npos)
            return count;

        temp += a;

        if(temp.find(b) != string::npos)
            return count + 1;

        return -1;


        
    }
};
// @lc code=end

