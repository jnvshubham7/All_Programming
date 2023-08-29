#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int maxSumAfterKOperations(vector<vector<int>>& matrix, int k) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    // Create a max heap of pairs (value, row index)
    priority_queue<pair<int, int>> maxHeap;
    
    // Initialize the max heap with the last elements of each row
    for (int i = 0; i < m; ++i) {
        maxHeap.push({matrix[i][n - 1], i});
    }
    
    // Perform k operations
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (!maxHeap.empty()) {
            pair<int, int> top = maxHeap.top();
            maxHeap.pop();
            int row = top.second;
            int value = top.first;
            
            sum += value;
            
            // Replace the selected element with the next element in the row
            if (n > 1) {
                maxHeap.push({matrix[row][n - 2], row});
                n--; // Reduce the effective row size
            }
        }
    }
    
    return sum;
}

int main() {
    int m, n, k;
    cout << "Enter the number of rows, columns, and k: ";
    cin >> m >> n >> k;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    int result = maxSumAfterKOperations(matrix, k);
    cout << "Maximum sum after " << k << " operations: " << result << endl;
    
    return 0;
}
