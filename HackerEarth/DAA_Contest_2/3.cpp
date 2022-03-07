
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &maze,int i,int j)
{
	if(i>= maze.size() || j >= maze[0].size() || maze[i][j] == -1)
	return false;
	else
	return true;
}
int noOfWays(vector<vector<int>> &maze,int i, int j,int n, int m)
{
	if(i == n -1 && j == m-1)
	return 1;
	if(isSafe(maze,i+1,j) && isSafe(maze,i,j+1))
		return noOfWays(maze,i+1,j,n,m) + noOfWays(maze,i,j+1,n,m);
	if(isSafe(maze,i+1,j))
		return noOfWays(maze,i+1,j,n,m);
	if(isSafe(maze,i,j+1))
		return noOfWays(maze,i,j+1,n,m);
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>>maze(n,vector<int>(m));
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < m ; j++)
			{
				cin>>maze[i][j];
			}
		}
		int ans = 0;
		cout<<noOfWays(maze,0,0,n,m)<<endl;
	}
}











































// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int countPaths(int maze[][C])
// {
//     // If the initial cell is blocked, there is no
//     // way of moving anywhere
//     if (maze[0][0]==-1)
//         return 0;
 
//     // Initializing the leftmost column
//     for (int i=0; i<R; i++)
//     {
//         if (maze[i][0] == 0)
//             maze[i][0] = 1;
 
//         // If we encounter a blocked cell in leftmost
//         // row, there is no way of visiting any cell
//         // directly below it.
//         else
//             break;
//     }
 
//     // Similarly initialize the topmost row
//     for (int i=1; i<C; i++)
//     {
//         if (maze[0][i] == 0)
//             maze[0][i] = 1;
 
//         // If we encounter a blocked cell in bottommost
//         // row, there is no way of visiting any cell
//         // directly below it.
//         else
//             break;
//     }
 
//     // The only difference is that if a cell is -1,
//     // simply ignore it else recursively compute
//     // count value maze[i][j]
//     for (int i=1; i<R; i++)
//     {
//         for (int j=1; j<C; j++)
//         {
//             // If blockage is found, ignore this cell
//             if (maze[i][j] == -1)
//                 continue;
 
//             // If we can reach maze[i][j] from maze[i-1][j]
//             // then increment count.
//             if (maze[i-1][j] > 0)
//                 maze[i][j] = (maze[i][j] + maze[i-1][j]);
 
//             // If we can reach maze[i][j] from maze[i][j-1]
//             // then increment count.
//             if (maze[i][j-1] > 0)
//                 maze[i][j] = (maze[i][j] + maze[i][j-1]);
//         }
//     }
 
//     // If the final cell is blocked, output 0, otherwise
//     // the answer
//     return (maze[R-1][C-1] > 0)? maze[R-1][C-1] : 0;
// }
















// // int numberOfPaths(int m, int n)
// // {
// //     // If either given row number is first or given column
// //     // number is first
// //     if (m == 1 || n == 1)
// //         return 1;
 
// //     // If diagonal movements are allowed then the last
// //     // addition is required.
// //     return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
// //     // + numberOfPaths(m-1, n-1);
// // }

// int main(){

// int t;
// cin>>t;
// while(t--){
//     int n,m;
//     cin>>n>>m;
//     //grid n,m
//     //Then each test case follows. The first line of each test case contains integers ‘N’ and ‘M’ representing the size of the input grid.
//     // Then ‘N’ lines follow, each of which contains ‘M’ space-separated integers denoting the elements of the matrix.

//     // cout<<numberOfPaths(n,m)<<endl;
//     //  return 0;

    

// }

   
// }