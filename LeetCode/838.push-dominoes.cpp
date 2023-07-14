/*
 * @lc app=leetcode id=838 lang=cpp
 *
 * [838] Push Dominoes
 */

// @lc code=start
class Solution {
public:
    string pushDominoes(string d) {

        int n = d.size();

        
        for(int i = 1; i < n-1; i++){
            if(d[i]=='.')
            {
                if(d[i-1]=='R' && d[i+1]=='L')
                    d[i] = '.';
                
            }
        }

        

        for(int i = 0; i < n; i++) {
            if(d[i] == 'L') {
                int j = i - 1;
                while(j >= 0 && d[j] == '.') {
                    d[j] = 'L';
                    j--;
                }
            }
            
        }

        for(int i = n - 1; i >= 0; i--) {
            if(d[i] == 'R') {
                int j = i + 1;
                while(j < n && d[j] == '.') {
                    d[j] = 'R';
                    j++;
                }
            }
        }

        return d;
        
    }
};
// @lc code=end

