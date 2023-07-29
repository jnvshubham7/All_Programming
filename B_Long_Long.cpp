#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

pair<ll, int> maxSumWithMinOps(vector<int>& arr) {
    ll maxSum = 0;
    int minOps = 0;
    int numNegatives = 0;
    ll totalSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            numNegatives++;
        }
        totalSum += abs(arr[i]);
        maxSum += max(0, arr[i]);
        minOps = min(minOps, numNegatives);
    }

    if (numNegatives % 2 == 1) {
        maxSum -= 2 * arr[minOps];
        totalSum -= arr[minOps];
    }

    return make_pair(totalSum, minOps);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        pair<ll, int> result = maxSumWithMinOps(arr);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
