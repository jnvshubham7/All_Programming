class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>> uniquePermutations; // Using set to store unique permutations
        generatePermutations(nums, 0, uniquePermutations);
        
        // Convert the set to vector and return
        for ( auto permutation : uniquePermutations) {
            result.push_back(permutation);
        }
        
        return result;
    }
    
private:
    void generatePermutations(vector<int>& nums, int start, set<vector<int>>& uniquePermutations) {
        // Base case: if we have reached the end of the vector, add the permutation to the set
        if (start == nums.size()) {
            uniquePermutations.insert(nums);
            return;
        }
        
        // Recursive case: generate permutations by swapping elements
        for (int i = start; i < nums.size(); i++) {
            // Skip if there are duplicate elements between start and i
            if (hasDuplicate(nums, start, i)) {
                continue;
            }
            
            swap(nums[start], nums[i]);
            generatePermutations(nums, start + 1, uniquePermutations);
            swap(nums[start], nums[i]); // Backtrack by restoring the original order
        }
    }
    
    bool hasDuplicate(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; i++) {
            if (nums[i] == nums[end]) {
                return true;
            }
        }
        return false;
    }
};
