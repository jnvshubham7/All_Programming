#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::sort(arr.begin(), arr.end());

        // Find the two unique elements in the list
        int first = arr[0];
        int second = arr[1];
        for (int i = 2; i < n; ++i) {
            if (arr[i] != first && arr[i] != second) {
                // We found two unique elements, so we can stop searching
                break;
            }
        }

        // Output one of the initial numbers
        std::cout << first << std::endl;
    }

    return 0;
}
