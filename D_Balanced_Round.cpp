#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumProblemsToRemove(vector<int>& difficulties, int k) {
    sort(difficulties.begin(), difficulties.end());

    int n = difficulties.size();
    int minProblemsToRemove = n - 1;

    for (int i = 0; i < n; ++i) {
        int j = upper_bound(difficulties.begin(), difficulties.end(), difficulties[i] + k) - difficulties.begin();
        minProblemsToRemove = min(minProblemsToRemove, n - (j - i));
    }

    return minProblemsToRemove;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> difficulties(n);
        for (int i = 0; i < n; ++i) {
            cin >> difficulties[i];
        }

        int minProblems = minimumProblemsToRemove(difficulties, k);
        cout << minProblems << endl;
    }

    return 0;
}
