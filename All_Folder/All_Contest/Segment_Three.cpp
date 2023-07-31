#include <iostream>
using namespace std;
class Solution {
public:
    int minIncrementsToMakeDelicious(int N, int A[]) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        int totalIncrements = 0;

        for (int i = 0; i < N; i++) {
            int remainder = A[i] % 3;
            if (remainder == 0) cnt0++;
            else if (remainder == 1) cnt1++;
            else cnt2++;
        }

        // Case 1: All counts are equal, no increments needed.
        if (cnt0 == cnt1 && cnt1 == cnt2) {
            return 0;
        }

        // Case 2: Not all counts are equal, we need to make them equal.
        while (!(cnt0 == cnt1 && cnt1 == cnt2)) {
            if (cnt0 > N / 3) {
                totalIncrements += (cnt0 - N / 3);
                cnt1 += (cnt0 - N / 3);
                cnt0 = N / 3;
            } else if (cnt1 > N / 3) {
                totalIncrements += (cnt1 - N / 3);
                cnt2 += (cnt1 - N / 3);
                cnt1 = N / 3;
            } else {
                totalIncrements += (cnt2 - N / 3);
                cnt0 += (cnt2 - N / 3);
                cnt2 = N / 3;
            }
        }

        // Case 3: If all counts are zero, increment any element to make its remainder 1.
        if (cnt0 == 0) totalIncrements++;

        return totalIncrements;
    }
};


int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of tables

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i]; // Number of ingredients initially present in the ith dish
        }

        Solution sol;
        int result = sol.minIncrementsToMakeDelicious(N, A);
        cout << result << endl;
    }

    return 0;
}
