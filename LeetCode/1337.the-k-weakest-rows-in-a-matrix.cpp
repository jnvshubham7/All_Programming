class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> strength; // Store the strength of each row along with its index
        
        // Calculate the strength of each row
        for (int i = 0; i < mat.size(); ++i) {
            int soldiers = 0;
            for (int j = 0; j < mat[i].size(); ++j) {
                soldiers += mat[i][j];
            }
            strength.push_back({soldiers, i});
        }
        
        // Sort the rows based on their strength
        sort(strength.begin(), strength.end());
        
        // Create the result vector with the indices of the weakest rows
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(strength[i].second);
        }
        
        return result;
    }
};
