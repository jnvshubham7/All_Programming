class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       int n = matrix.size();
        
        // Create a set for each row and column to store the numbers
        vector<unordered_set<int>> rows(n), columns(n);
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = matrix[i][j];
                
                // Check if the number already exists in the same row or column
                if (rows[i].count(num) || columns[j].count(num)) {
                    return false;
                }
                
                // Add the number to the row and column sets
                rows[i].insert(num);
                columns[j].insert(num);
            }
        }
        
        // Check if each row and column contains all the numbers from 1 to n
        for (int i = 0; i < n; ++i) {
            if (rows[i].size() != n || columns[i].size() != n) {
                return false;
            }
        }
        
        return true;
    }
};
