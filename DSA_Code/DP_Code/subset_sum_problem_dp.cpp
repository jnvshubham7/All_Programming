//https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/
// Subset Sum problem

#include <bits/stdc++.h>
using namespace std;

bool isSubsetPoss(int arr[], int n, int sum) {
	bool t[n + 1][sum + 1]; // DP - matrix
	// initialization
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0)
				t[i][j] = false;
			if (j == 0)
				t[i][j] = true;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			else
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][sum];
}

signed main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum; cin >> sum;

	isSubsetPoss(arr, n, sum) ? cout << "Yes\n" : cout << "No\n";
	return 0;
}