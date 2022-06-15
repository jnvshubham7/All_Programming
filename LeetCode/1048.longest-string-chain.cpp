/*
 * @lc app=leetcode id=1048 lang=cpp
 *
 * [1048] Longest String Chain
 */

// @lc code=start
class Solution {
public:

bool is_valid(string s) {
    if(s.size() < 1) {
        return false;
    }
    
    else if(s.size() > 1) {
        return true;
    }

    else {
        return false;
    }
}



    int longestStrChain(vector<string>& words) {

        int n=words.size();
        int ans=0;
        int max_len=0;
        int max_len_index=0;

        for(int i=0; i<n; i++) {
            if(words[i].length() > max_len) {
                max_len = words[i].length();
                max_len_index = i;
            }
        }

        for(int i=0; i<n; i++) {
            if(words[i].length() == max_len) {
                if(words[i].length() == 1) {
                    ans++;
                }
                else {
                    if(is_valid(words[i], words[max_len_index])) {
                        ans++;
                    }
                }
            }
        }

        return ans;
        
    }
};
// @lc code=end

