class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    void permutation(vector<int>&nums,int l,int r)
    {
        if(l==nums.size() && s.find(nums)==s.end())
        {
           ans.push_back(nums);
           s.insert(nums);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(nums[i],nums[l]);
            permutation(nums,l+1,r);
            swap(nums[i],nums[l]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         permutation(nums,0,nums.size()-1);
        return ans;
    }
};




















// //Solution 01:
// class Solution {
// public:
//     vector<int> temp;
//     vector<vector<int>> ans;
//     unordered_map<int, int> mp;
    
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         int n = nums.size();
        
//         for(auto x:nums) mp[x]++;
        
//         help(0, n);
//         return ans;
//     }
    
//     void help(int index, int n){
//         if(index == n){
//             ans.push_back(temp);
//             return;
//         }
//         for(auto k:mp){
//             int key = k.first;
//             int value = k.second;
            
//             if(value == 0) continue;
            
//             temp.push_back(key);
//             mp[key]--;
            
//             help(index+1, n);
            
//             temp.pop_back();
//             mp[key]++;
//         }
//     }
// };





















































// class Solution {
// private:
// 	vector<vector<int>> _res;
// 	void DFS(const vector<int>& candidates, vector<int>& combination, int target, int i_start){
// 		if(target == 0){
// 			_res.push_back(combination);
// 			return;
// 		}
// 		for (int i = i_start; i < candidates.size();++i){//i_start is important to remove duplicates under the situation
// 			if(target - candidates[i] >= 0){
// 				combination.push_back(candidates[i]);
// 				DFS(candidates, combination, target - candidates[i], i);
// 				combination.pop_back();
// 			}
// 		}
// 	}

// public:
//     vector<vector<int>> combinationSum(const vector<int>& candidates, int target) {
// 		vector<int> combination;
// 		DFS(candidates, combination, target,0);
// 		return _res;
// 	}
// };































// // class Solution {

// //    //backtrack function 
// //     // void backtrack(vector<vector<int>>& result, vector<int>& temp, int start, int end) {
// //     //     if (start > end) {
// //     //         result.push_back(temp);
// //     //         return;
// //     //     }
// //     //     for (int i = start; i <= end; i++) {
// //     //         temp[start] = i;
// //     //         backtrack(result, temp, start + 1, end);
// //     //     }
// //     // }

// //     //main function
// //     // vector<vector<int>> subsets(vector<int>& nums) {
// //     //     vector<vector<int>> result;
// //     //     vector<int> temp(nums.size(), 0);
// //     //     backtrack(result, temp, 0, nums.size() - 1);
// //     //     return result;
// //     // }

   















// //     //main function
// //     // vector<vector<int>> subsets(vector<int>& nums) {
// //     //     vector<vector<int>> result;
// //     //     vector<int> temp;
// //     //     result.push_back(temp);
// //     //     for (int i = 0; i < nums.size(); i++) {
// //     //         int size = result.size();
// //     //         for (int j = 0; j < size; j++) {
// //     //             temp = result[j];
// //     //             temp.push_back(nums[i]);

// //     //             result.push_back(temp);
// //     //         }
// //     //     }
// //     //     return result;
// //     // }











// // //PERMUTEUnique functionn
// //  void permuteUnique(vector<int>& nums, int start, int end) {
// //     if (start > end) {
// //         return;
// //     }
// //     if (start == end) {
// //         cout << nums[start] << " ";
// //         return;
// //     }
// //     for (int i = start; i <= end; i++) {
// //         swap(nums[start], nums[i]);
// //         permuteUnique(nums, start + 1, end);
// //         swap(nums[start], nums[i]);
// //     }
// // }





// // public:
// //     vector<vector<int>> permuteUnique(vector<int>& nums) 
    
    
    
// //     {
// //         vector<vector<int>> result;
// //         vector<int> temp(nums.size(), 0);
// //         permuteUnique(result, temp, nums, 0);
// //         return result;
    




// //         //check how many different numbers are in the vector
// //         // int num_of_numbers = nums.size();

// //         // //how many different permutations are there
// //         // int num_of_permutations = pow(2, num_of_numbers);

// //         // //create a vector to store the permutations
// //         // vector<vector<int>> permutations;

// //         // //create a vector to store the current permutation
// //         // vector<int> current_permutation;




// //         //use backtracking to find all permutations
// //         // vector<vector<int>> res;
// //         // vector<int> temp;

// //         // sort(nums.begin(), nums.end());
// //         // backtrack(res, temp, nums);

// //         // return res;



        
        
// //     }
// // };