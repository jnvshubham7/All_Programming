/*
 * @lc app=leetcode id=1884 lang=cpp
 *
 * [1884] Egg Drop With 2 Eggs and N Floors
 */

// @lc code=start
class Solution {
public:
    
    int dp[3][1001];
   
    int twoEggDrop(int n) {

        memset(dp,-1,sizeof(dp));

        return Solve(2,n);
        
    }

    
   int Solve(int eggs, int floors) {

    if(dp[eggs][floors] != -1)
    {
        return dp[eggs][floors];
    }


	if (eggs == 1)
		return dp[eggs][floors]= floors;
	if (floors == 0 || floors == 1)
		return dp[eggs][floors]= floors;

	int mn = INT_MAX;
	for (int k = 1; k <= floors; k++) {
		int temp_ans = 1 + max(Solve(eggs - 1, k - 1), Solve(eggs, floors - k));
		mn = min(mn, temp_ans);
	}

	return dp[eggs][floors]= mn;
  }


};
// @lc code=end

