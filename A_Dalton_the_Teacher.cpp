#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        int samePositions = 0; // Count of students already in their correct positions

        // Read the seating arrangement and count students in correct positions
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            if (nums[i] == i + 1) samePositions++;
        }

        // Calculate the minimum number of moves required based on the count of students in correct positions
        if (samePositions % 2 == 0) {
            cout << samePositions / 2 << endl;
        } else {
            cout << samePositions / 2 + 1 << endl;
        }
    }

    return 0;
}
