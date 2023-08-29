//https://leetcode.com/problems/super-egg-drop/
// https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/
#include <bits/stdc++.h>
using namespace std;

int Solve(int eggs, int floors) {
	if (eggs == 1)
		return floors;
	if (floors == 0 || floors == 1)
		return floors;

	int mn = INT_MAX;
	for (int k = 1; k <= floors; k++) {
		int temp_ans = 1 + max(Solve(eggs - 1, k - 1), Solve(eggs, floors - k));
		mn = min(mn, temp_ans);
	}

	return mn;
}

signed main() {
	int eggs, floors;
	cin >> eggs >> floors;

	cout << Solve(eggs, floors) << endl;
	return 0;
}