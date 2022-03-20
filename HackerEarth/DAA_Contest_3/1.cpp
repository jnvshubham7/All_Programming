#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*
    Time complexity : O(4 ^ (N ^ 2))
    Space complexity : O(N ^ 2)

    Where 'N' is the dimension of the matrix.
*/

void insertCurrentState(vector<vector<int>> &solution, vector<vector<int>> &ans, int n){
    // Insert the solution matrix element by element in ans.
    vector<int> currentState;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            currentState.push_back(solution[i][j]);
        }
    }
    ans.push_back(currentState);
}

void solveMaze(vector<vector<int>> &maze, vector<vector<int>> &solution, vector<vector<int>> &ans, int x, int y, int n){
    // Base case that we reach our destination.
    if (x == n - 1 && y == n - 1){
        solution[x][y] = 1;
        // Call to add the updated solution matrix in 'ANS'.
        insertCurrentState(solution, ans, n); 
        return;
    }

    // Condition of out of boundary of the maze.
    if (x > n - 1 || x < 0 || y > n - 1 || y < 0){
        return;
    }

    /*
       Condition for 'MAZE[x][y]==0' - if that particular cell is block.
       'SOLUTION[x][y]'' == 1 - if it is already visited or already we go through it.
    */
    if (maze[x][y] == 0 || solution[x][y] == 1){
        return;
    }

    // No problem comes in visiting this cell so visit it.
    solution[x][y] = 1;

    // Recursive calls to all directions(call to function having same name with diff value of params).
    // Up move.
    solveMaze(maze, solution, ans, x - 1, y, n); 
    // Down move.
    solveMaze(maze, solution, ans, x + 1, y, n); 
    // Left move.
    solveMaze(maze, solution, ans, x, y - 1, n); 
    // Right move.
    solveMaze(maze, solution, ans, x, y + 1, n);

    // Backtracking if there is no further path exists.
    solution[x][y] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int>> maze, int n){
    // Initialize the 'SOLUTION' matrix by all 0s.
    vector<vector<int>> solution(n, vector<int>(n, 0));

    // Vector used to store all the paths.
    vector<vector<int>> ans;

    // Final call to function to print the solutions.
    solveMaze(maze, solution, ans, 0, 0, n);

    // Return the updated ans.
    return ans;
}



// vector<vector<int>> ratInAMaze(vector<vector<int>> maze, int n){
//     // Initialize the 'SOLUTION' matrix by all 0s.
//     vector<vector<int>> solution(n, vector<int>(n, 0));

//     // Vector used to store all the paths.
//     vector<vector<int>> ans;

//     // Final call to function to print the solutions.
//     solveMaze(maze, solution, ans, 0, 0, n);

//     // Return the updated ans.
//     return ans;
// }


// void insertCurrentState(vector<vector<int>> &solution, vector<vector<int>> &ans, int n){
//     // Insert the solution matrix element by element in ans.
//     vector<int> currentState;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             currentState.push_back(solution[i][j]);
//         }
//     }
//     ans.push_back(currentState);
// }




// void solveMaze(vector<vector<int>> &maze, vector<vector<int>> &solution, vector<vector<int>> &ans, int x, int y, int n){
//     // Base case that we reach our destination.
//     if (x == n - 1 && y == n - 1){
//         solution[x][y] = 1;
//         // Call to add the updated solution matrix in 'ANS'.
//         insertCurrentState(solution, ans, n); 
//         return;
//     }

//     // Condition of out of boundary of the maze.
//     if (x > n - 1 || x < 0 || y > n - 1 || y < 0){
//         return;
//     }

//     /*
//        Condition for 'MAZE[x][y]==0' - if that particular cell is block.
//        'SOLUTION[x][y]'' == 1 - if it is already visited or already we go through it.
//     */
//     if (maze[x][y] == 0 || solution[x][y] == 1){
//         return;
//     }

//     // No problem comes in visiting this cell so visit it.
//     solution[x][y] = 1;

//     // Recursive calls to all directions(call to function having same name with diff value of params).
//     // Up move.
//     solveMaze(maze, solution, ans, x - 1, y, n); 
//     // Down move.
//     solveMaze(maze, solution, ans, x + 1, y, n); 
//     // Left move.
//     solveMaze(maze, solution, ans, x, y - 1, n); 
//     // Right move.
//     solveMaze(maze, solution, ans, x, y + 1, n);

//     // Backtracking if there is no further path exists.
//     solution[x][y] = 0;
// }


int main(){


    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> maze[i][j];
        }
    }

    vector<vector<int>> ans = ratInAMaze(maze, n);

    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

   


// You are given a 'N' * 'N' maze with a rat placed at 'MAZE[0][0]'. 
// Find and print all paths that rat can follow to reach its destination i.e. 
// 'MAZE['N' - 1]['N' - 1]'. Rat can move in any direc­tion ( left, right, up and down).

// ll N;
// cin>>N;

// ll maze[N][N];

// for(ll i = 0; i < N; i++)
// {
//     for(ll j = 0; j < N; j++)
//     {
//         cin>>maze[i][j];
//     }
// }



//solve this by backtracking and recursion
//
// You are given a 'N' * 'N' maze with a rat placed at 'MAZE[0][0]'. 
// Find and print all paths that rat can follow to reach its destination i.e. 
// 'MAZE['N' - 1]['N' - 1]'. Rat can move in any direc­tion ( left, right, up and down).






//
//  vector<vector<int>> ans = ratInAMaze(maze, N);

//  // Print the paths.
//     for(ll i = 0; i < ans.size(); i++)
//     {
//         for(ll j = 0; j < ans[i].size(); j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }



//ll dp[N][N];
// dp[i][j] = 1 if there is a path from maze[0][0] to maze[i][j]
// dp[i][j] = 0 if there is no path from maze[0][0] to maze[i][j]
// dp[i][j] = -1 if we have already visited maze[i][j]
// dp[i][j] = -2 if we have already visited maze[i][j] and there is no path from maze[0][0] to maze[i][j]


//use dp to store the path
// dp[i][j] = 1 if there is a path from maze[0][0] to maze[i][j]
// dp[i][j] = 0 if there is no path from maze[0][0] to maze[i][j]
// dp[i][j] = -1 if we have already visited maze[i][j]
// dp[i][j] = -2 if we have already visited maze[i][j] and there is no path from maze[0][0] to maze[i][j]







//find path
//1. start from (0,0)
//2. if (i,j) is not visited
//3. mark it as visited
//4. if (i,j) is destination
//5. print path
//6. unmark it



  










    return 0;
}












/*
    Time complexity : O(4 ^ (N ^ 2))
    Space complexity : O(N ^ 2)

    Where 'N' is the dimension of the matrix.
*/

// void insertCurrentState(vector<vector<int>> &solution, vector<vector<int>> &ans, int n){
//     // Insert the solution matrix element by element in ans.
//     vector<int> currentState;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             currentState.push_back(solution[i][j]);
//         }
//     }
//     ans.push_back(currentState);
// }

// void solveMaze(vector<vector<int>> &maze, vector<vector<int>> &solution, vector<vector<int>> &ans, int x, int y, int n){
//     // Base case that we reach our destination.
//     if (x == n - 1 && y == n - 1){
//         solution[x][y] = 1;
//         // Call to add the updated solution matrix in 'ANS'.
//         insertCurrentState(solution, ans, n); 
//         return;
//     }

//     // Condition of out of boundary of the maze.
//     if (x > n - 1 || x < 0 || y > n - 1 || y < 0){
//         return;
//     }

//     /*
//        Condition for 'MAZE[x][y]==0' - if that particular cell is block.
//        'SOLUTION[x][y]'' == 1 - if it is already visited or already we go through it.
//     */
//     if (maze[x][y] == 0 || solution[x][y] == 1){
//         return;
//     }

//     // No problem comes in visiting this cell so visit it.
//     solution[x][y] = 1;

//     // Recursive calls to all directions(call to function having same name with diff value of params).
//     // Up move.
//     solveMaze(maze, solution, ans, x - 1, y, n); 
//     // Down move.
//     solveMaze(maze, solution, ans, x + 1, y, n); 
//     // Left move.
//     solveMaze(maze, solution, ans, x, y - 1, n); 
//     // Right move.
//     solveMaze(maze, solution, ans, x, y + 1, n);

//     // Backtracking if there is no further path exists.
//     solution[x][y] = 0;
// }

// vector<vector<int>> ratInAMaze(vector<vector<int>> maze, int n){
//     // Initialize the 'SOLUTION' matrix by all 0s.
//     vector<vector<int>> solution(n, vector<int>(n, 0));

//     // Vector used to store all the paths.
//     vector<vector<int>> ans;

//     // Final call to function to print the solutions.
//     solveMaze(maze, solution, ans, 0, 0, n);

//     // Return the updated ans.
//     return ans;
// }



















// #include<bits/stdc++.h>
// using namespace std;
// int board[20][20] = {0};

// void ratMaze(int maze[][20], int n, int row, int col){
//     if(row == n-1 && col == n-1){
//         for(int i = 0; i< n; i++){
//             for(int j = 0; j<n; j++){
//                 cout<<board[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//         return;
//     }
//     if(row < n-1 && col < n){
//         if(board[row + 1][col] == 0 && maze[row+1][col] == 1 ){
//             board[row+1][col] = 1;
//             ratMaze(maze, n, row+1, col);
//             board[row+1][col] = 0;
//         }
//     }
//     if(row < n && col < n+1){
//         if(board[row][col+1] == 0 && maze[row][col+1] == 1 ){
//             board[row][col+1] = 1;
//             ratMaze(maze, n, row, col+1);
//             board[row][col+1] = 0;
//         }
//     }
//     if(row >= 0 && col >= 1 && row<n && col<n){
//         if(board[row][col-1] == 0 && maze[row][col-1] == 1 ){
//             board[row][col-1] = 1;
//             ratMaze(maze, n, row, col-1);
//             board[row][col-1] = 0;
//         }
//     }
//     if(row >=1 && col >=0 && row<n && col<n){
//         if(board[row - 1][col] == 0 && maze[row-1][col] == 1 ){
//             board[row-1][col] = 1;
//             ratMaze(maze, n, row-1, col);
//             board[row-1][col] = 0;
//         }
//     }
// }

// void ratInAMaze(int maze[][20], int n){
//   memset(board,0,15*15*sizeof(int));
//   board[0][0] = 1;
//   ratMaze(maze,n,0,0);
//   return;
// }