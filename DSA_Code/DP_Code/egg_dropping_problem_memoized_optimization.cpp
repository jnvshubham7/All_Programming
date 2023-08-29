//https://leetcode.com/problems/super-egg-drop/
#include <bits/stdc++.h>
using namespace std;

const int D = 101;
int dp[D][D];

int Solve(int eggs, int floors) {
	if (dp[eggs][floors] != -1)
		return dp[eggs][floors];

	if (eggs == 1 || floors == 0 || floors == 1) {
		dp[eggs][floors] = floors;
		return floors;
	}

	int mn = INT_MAX;
	for (int k = 1; k <= floors; k++) {
		int top, bottom;
		if (dp[eggs - 1][k - 1] != -1)
			top = dp[eggs - 1][k - 1];
		else {
			top = Solve(eggs - 1, k - 1);
			dp[eggs - 1][k - 1] = top;
		}

		if (dp[eggs][floors - k] != -1)
			bottom = dp[eggs][floors - k];
		else {
			bottom = Solve(eggs, floors - k);
			dp[eggs][floors - k] = bottom;
		}
		int temp_ans = 1 + max(top, bottom);
		mn = min(mn, temp_ans);
	}

	return dp[eggs][floors] = mn;
}

signed main() {
	int eggs, floors;
	cin >> eggs >> floors;

	memset(dp, -1, sizeof(dp));

	cout << Solve(eggs, floors) << endl;
	return 0;
}