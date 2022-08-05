/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

      vector<int> v;

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
            v.push_back(matrix[i][j]);
            }
        }

       // return binary_search(v, k);
        sort(v.begin(), v.end());
       return v[k-1];

       




       


        
    }
};
// @lc code=end

















//  int n=matrix.size();
//         int m=matrix[0].size();

//         vector<int> v;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 v.push_back(matrix[i][j]);
//             }
//         }

//         sort(v.begin(),v.end());

//         // if(v.size()==1)
//         // {
//         //     return v[0];
//         // }

//         // int ans;

//         // int i=0;
//         // int j=v.size()-1;
//         // while(i<j){
//         //    int mid=(i+j)/2;
//         //     if(mid==k-1){
//         //         return v[mid];
//         //     }
//         //     else if(mid>k-1){
//         //         j=mid-1;
//         //     }
//         //     else{
//         //         i=mid+1;
//         //     }
//         // }

//         //return ans;


      

//         return v[k-1]; 



