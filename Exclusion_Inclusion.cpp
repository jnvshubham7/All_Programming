
#include <iostream>
#include <vector>


#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<long long> solve(int N, const std::vector<int>& A) {
        std::vector<long long> scores(N);

        // Sort the array in non-increasing order
        std::vector<int> sortedArray = A;
        std::sort(sortedArray.rbegin(), sortedArray.rend());

        // Calculate the score for each K
        long long totalSum = 0;
        for (int i = 0; i < N; ++i) {
            totalSum += sortedArray[i];
            scores[i] = totalSum;
        }

        return scores;
    }
};


int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        Solution solution;
        std::vector<long long> result = solution.solve(N, A);

        reverse(result.begin(), result.end());

        for (int i = 0; i < N; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
