#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int maxCost = a[n - 1] - a[0];
        int minCost = maxCost;

        for (int i = 1; i < n; ++i) {
            int colorCost = a[i] - a[i - 1];
            minCost = min(minCost, colorCost);
        }

        cout << minCost << endl;
    }

    return 0;
}
