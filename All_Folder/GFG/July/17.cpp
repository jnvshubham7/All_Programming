// C++ implementation to find the
// largest square in the matrix such
// that it contains atmost K 1's

#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

// Function to calculate the
// largest square with atmost K
// 1s for Q queries
void largestSquare(int matrix[][MAX],
			int R, int C, int q_i[],
			int q_j[], int K, int Q){
				
	// Loop to solve for each query
	for (int q = 0; q < Q; q++) {
		int i = q_i[q];
		int j = q_j[q];
		int min_dist = min(min(i, j),
		min(R - i - 1, C - j - 1));
		int ans = -1;
		for (int k = 0; k <= min_dist;
								k++) {
			int count = 0;
			// Traversing the each sub
			// square and counting total
			for (int row = i - k;
			row <= i + k; row++)
				for (int col = j - k;
				col <= j + k; col++)
					count += matrix[row][col];
			
			// Breaks when exceeds
			// the maximum count
			if (count > K)
				break;
			
			ans = 2 * k + 1;
		}
		cout << ans << "\n";
	}
}

// Driver Code
int main()
{
	int matrix[][MAX] = { { 1, 0, 1, 0, 0 },
						{ 1, 0, 1, 1, 1 },
						{ 1, 1, 1, 1, 1 },
						{ 1, 0, 0, 1, 0 } };
	int K = 9, Q = 1;
	int q_i[] = { 1 };
	int q_j[] = { 2 };
	largestSquare(matrix, 4, 5, q_i,
						q_j, K, Q);
	return 0;
}








// //{ Driver Code Starts.

// int main() {


// //     R = 4, C = 5
// // M = {{1, 0, 1, 0, 0} 
// //      {1, 0, 1, 1, 1} 
// //      {1, 1, 1, 1, 1} 
// //      {1, 0, 0, 1, 0}}
// // K = 9, Q = 1
// // q_i[] = {1}
// // q_j[] = {2}

   
//    int R=4,C=5;
//     vector<vector<int>> M = {{1, 0, 1, 0, 0},
//                               {1, 0, 1, 1, 1},
//                               {1, 1, 1, 1, 1},
//                               {1, 0, 0, 1, 0}};
//     int K=9,Q=1;
//     int q_i[] = {1};
//     int q_j[] = {2};
//     largestSquare(M,R,C,q_i,q_j,K,Q);
//     // Solution ob;
//     // ob.largestSquare(M,R,C,q_i,q_j,K,Q);
//    // vector<int> ans = ob.largestSquare(M, R, C, K, Q, q_i, q_j);
//     // for(auto x:ans)
//     //     cout<<x<<" ";
//     // cout<<endl;
   




//     // int t;
//     // cin >> t;
//     // while (t--) {
//     //     int R,C,K,Q,x;
//     //     cin>>R>>C;
//     //     vector<vector<int>> M;
        
//     //     for(int a=0; a<R; a++)
//     //     {
//     //         vector<int> temp;
//     //         for(int b=0; b<C; b++)
//     //         {
//     //             cin>>x;
//     //             temp.push_back(x);
//     //         }
//     //         M.push_back(temp);
//     //     }
        
//     //     cin>>K>>Q;
        
//     //     int q_i[Q], q_j[Q];
        
//     //     for(int i=0; i<Q; i++)
//     //         cin>>q_i[i];
//     //     for(int i=0; i<Q; i++)
//     //         cin>>q_j[i];

//         // Solution ob;
//         // vector<int> res = ob.largestSquare(M,R,C,K,Q,q_i,q_j);
        
//         // for(int i=0; i<Q; i++)
//         //     cout<<res[i]<<" ";
//         // cout<<endl;
    
//     return 0;
// }
// // } Driver Code Ends