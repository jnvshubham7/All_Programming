/*
 * @lc app=leetcode id=1024 lang=cpp
 *
 * [1024] Video Stitching
 */

// @lc code=start
class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {

         string s;
  cin >> s;
  bool flag = false;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    for (int j = n; j > i; j--) {
      if (s[i] == s[j])
        // cout<<abs(j-i);

        // flag = true;
        break;

      // else
      // cout<<-1<<endl;

      // if(s[0] == s[n-1]){
      //     flag = true;
      //     break;
    }
  }
        
    }
};
// @lc code=end

