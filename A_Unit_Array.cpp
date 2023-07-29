#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int min_operations_to_good_array(const vector<int>& arr) {
    int neg_count = 0;
    int pos_count = 0;
    int prod = 1;

    for (int num : arr) {
        if (num == -1) {
            neg_count++;
        } else {
            pos_count++;
        }
        prod *= num;
    }

    // Check if the array is already good
    if (prod == 1 && neg_count % 2 == 0) {
        return 0;
    }

    // Check the two cases where we need to change elements
    return min(neg_count, pos_count);
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

        int min_ops = min_operations_to_good_array(arr);
        cout << min_ops << endl;
    }

    return 0;
}
