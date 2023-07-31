#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(2 * N);
        int oddCount = 0, evenCount = 0;

        for (int i = 0; i < 2 * N; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        int operationsNeeded = abs(oddCount - evenCount) / 2;
        cout << operationsNeeded << endl;
    }

    return 0;
}
