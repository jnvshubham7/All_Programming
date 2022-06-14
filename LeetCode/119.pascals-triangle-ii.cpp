/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int n) {

        
        vector<int> v;
        v.push_back(1);
        if(n==0) return v;
        v.push_back(1);
        if(n==1) return v;

        for(int i=2;i<=n;i++){
            vector<int> v1;
            v1.push_back(1);
            for(int j=1;j<i;j++){
                v1.push_back(v[j-1]+v[j]);
            }
            v1.push_back(1);
            v=v1;
        }
        return v;
        
    }
};
// @lc code=end

