class Solution
{
    public:
    void subset(int i, vector<int>& A, vector<int>& temp, vector<vector<int> >& ans){
        if(i==A.size()){
            ans.push_back(temp);
            return;
        }
        //pick
        temp.push_back(A[i]);
        subset(i+1,A,temp,ans);
        //not pick
        temp.pop_back();
        subset(i+1,A,temp,ans);
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<int> temp;
        vector<vector<int> > ans;
        int i=0;
        subset(i, A, temp, ans);
        sort(ans.begin(),ans.end());
        return ans;
        //code here
    }
};















// class Solution
// {
//     public:
    
//     //fnction for subset 

//     //subsets_util(A,0,ans)





//     // void subset(int arr[], int n, int i, int sum, int target, vector<int> &v)
//     // {
//     //     if(sum == target)
//     //     {
//     //         for(int i = 0; i < v.size(); i++)
//     //             cout << v[i] << " ";
//     //         cout << endl;
//     //         return;
//     //     }
//     //     if(i == n)
//     //         return;
//     //     subset(arr, n, i+1, sum, target, v);
//     //     v.push_back(arr[i]);
//     //     subset(arr, n, i+1, sum+arr[i], target, v);
//     //     v.pop_back();
//     // }

//     vector<vector<int> > subsets(vector<int>& A)
//     {

//         vector<vector<int> > ans;
//         vector<int> v;
//         ans.push_back(v);
//         sort(A.begin(), A.end());
//         for(int i = 0; i < A.size(); i++)
//         {
//             int size = ans.size();
//             for(int j = 0; j < size; j++)
//             {
//                 vector<int> temp = ans[j];
//                 temp.push_back(A[i]);
//                 ans.push_back(temp);
//                 //sort
//                 sort(ans.begin(), ans.end());
//             }
//         }
//         return ans;






















//         //all subset store in this vector
//     //     vector<vector<int> > ans;
//     //     //sort the array
//     //     sort(A.begin(),A.end());

//     //     //push all possible subset in ans

//     //     subset(A, A.size(), 0, 0, ans);



//     //     //call the function
//     //    // subsets_util(A,0,ans);
//     //     return ans;


//         //Given a set of positive integers, find all its subsets.
//         //Input: [1,2,3]
//         //Output: [], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]
//         //Your algorithm should run in O(2^n) time complexity and O(n) space complexity.
//         //Note:
//         //1. Elements in a subset must be in non-descending order.
//         //2. The solution set must not contain duplicate subsets.
//         //For example,
//         //If S = [1,2,3], a solution is:
//         //[
//         //  [3],
//         //  [1],


//         // vector<vector<int> > result;
//         // vector<int> temp;
//         // result.push_back(temp);
//         // sort(A.begin(), A.end());
//         // for(int i = 0; i < A.size(); i++)
//         // {
//         //     int size = result.size();
//         //     for(int j = 0; j < size; j++)
//         //     {
//         //         vector<int> temp = result[j];
//         //         temp.push_back(A[i]);
//         //         result.push_back(temp);
//         //     }
//         // }
//         // return result;


//         //code here
//     }
// };