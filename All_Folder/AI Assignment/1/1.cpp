// 1. Define the 8-puzzle problem.
//8-puzzle problem is a puzzle where the goal is to arrange 
//the tiles in a 3x3 grid in such a way that each tile is in its correct position.    


2. List out the possible approaches and explain each algorithm to solve them.
1. Brute force:
Brute force is the simplest approach to solving the problem.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we return false.
2. Backtracking:
Backtracking is an approach to solving the problem that involves recursion.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we backtrack and try to place the next tile in every possible position.
3. Dynamic programming:
Dynamic programming is an approach to solving the problem that involves memoization.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we return false.
4. Greedy:
Greedy is an approach to solving the problem that involves choosing the next tile to place based on some heuristic.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we return false.
5. A*:
A* is an approach to solving the problem that involves choosing the next tile to place based on some heuristic.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we return false.
6. Branch and bound:
Branch and bound is an approach to solving the problem that involves choosing the next tile to place based on some heuristic.
We can start with an empty grid and try to place each tile in every possible position.
If we find a solution, we return true.
If we don’t find a solution, we return false.










// 3. Implement the code of each approach.








#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
unordered_map<string,bool> mp;
void dfs(int row,int col,int swaps,string &cur,vector<vector<char>> &board,vector<vector<char>> &goal){
     if(board==goal){
        ans=min(ans,swaps);
        return;
     }
     if(mp.find(cur)!=mp.end()) return;
     mp[cur]=true;
     int i,j;
     if(col-1>=0){
        i=row*3+(col-1),j=row*3+col;
        swap(board[row][col-1],board[row][col]);
        swap(cur[i],cur[j]);
        dfs(row,col-1,swaps+1,cur,board,goal);
        swap(board[row][col-1],board[row][col]);
        swap(cur[i],cur[j]);
     }
     if(row-1>=0){
         i=(row-1)*3+col,j=row*3+col;
        swap(board[row-1][col],board[row][col]);
        swap(cur[i],cur[j]);
        dfs(row-1,col,swaps+1,cur,board,goal);
        swap(board[row-1][col],board[row][col]);
        swap(cur[i],cur[j]);
     }
     if(col+1<3){
         i=row*3+col+1,j=row*3+col;
        swap(board[row][col+1],board[row][col]);
        swap(cur[i],cur[j]);
        dfs(row,col+1,swaps+1,cur,board,goal);
        swap(board[row][col+1],board[row][col]);
        swap(cur[i],cur[j]);
     }
     if(row+1<3){
         i=(row+1)*3+col,j=row*3+col;
        swap(board[row+1][col],board[row][col]);
        swap(cur[i],cur[j]);
        dfs(row+1,col,swaps+1,cur,board,goal);
        swap(board[row+1][col],board[row][col]);
        swap(cur[i],cur[j]);
     }
   return;
}
int main(){
    cout<<"Input the initial state board configuration:"<<"\n";
    string cur="";
    int bRow=0,bCol=0;
    vector<vector<char>> board(3,vector<char>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>board[i][j];
            cur+=board[i][j];
            if(board[i][j]=='B'){
                bRow=i;
                bCol=j;
            }
        }
    }
    cout<<"Input the final state board configuration: "<<"\n";
    vector<vector<char>> goal(3,vector<char>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>board[i][j];
        }
    }
    dfs(bRow,bCol,0,cur,board,goal);
    if(ans==INT_MAX) cout<<"Goal can't be reached"<<'\n';
    else cout<<ans<<'\n';
    return 0;
}



























// class Node():
//     def __init__(self, board=[]):
//         self.board=board
//         self.adjacency_list=[]

//     def get_adjacency_list(self):
//         return self.adjacency_list

//     def set_adjacency_list(self, adjacency_list):
//         self.adjacency_list = adjacency_list

//     def add_item_to_adjacency_list(self, item):
//         self.adjacency_list.append(item)

//     def generate_adjacency_list(self):
//         '''
//         Generates the adjancency list
//         from a given puzzle 8's board.
//         '''
//         adj_lists = []
//         empty_cell = 0
//         row_empty_cell = col_empty_cell = 0
//         tmp_array = None

//         for array in self.board:
//             if empty_cell in array:
//                tmp_array = array
//                break
//         row_empty_cell = self.board.index(tmp_array)
//         col_empty_cell = tmp_array.index(empty_cell)

//         left = (row_empty_cell, col_empty_cell - 1)
//         right = (row_empty_cell, col_empty_cell + 1)
//         up = (row_empty_cell - 1, col_empty_cell)
//         down = (row_empty_cell + 1, col_empty_cell)
//         max_bound = 3

//         for direction in [left, up, right, down]:
//             (row, col) = direction
//             if row >= 0 and row < max_bound and col >= 0 and col < max_bound:
//                 adj_list = [r[:] for r in self.board]
//                 adj_list[row_empty_cell][col_empty_cell] = adj_list[row][col]
//                 adj_list[row][col] = empty_cell
//                 self.add_item_to_adjacency_list(Node(adj_list))

// def bfs(root_node, goal_node):
//     '''
//     Implementation of the Breadth
//     First Search algorithm.
//     The problem to be solved by this
//     algorithm is the Puzzle 8 game.

//     input: root -- the root node where
//     the search begins.
//     goal_node -- The objective to reach.

//     return:
//     (path, node) -- A tuple with a
//     dictionary path whose key node
//     gives the path backwards to the
//     objective node.
//     '''
//     frontier = [root_node]
//     path = {root_node : None} # The path where a node came from
//     level = {root_node : 0}
//     boards = [root_node.get_board()] # List of boards to check a board was already generated
//     i = 1
//     while frontier:
//         next_frontier = []
//         for node_parent in frontier:
//             if node_parent.get_board() == goal_node.get_board():
//                 return (path, node_parent)
//             node_parent.generate_adjacency_list()
//             for children in node_parent.get_adjacency_list():
//                 if children.get_board() not in boards:
//                     boards.append(children.get_board())
//                     next_frontier.append(children)
//                     level[children] = i
//                     path[children] = node_parent
//         frontier = next_frontier
//         print("Level ", i)
//         print("Number of nodes ", len(frontier))
//         i += 1
//     return (path, root_node)

// root_node = Node([[2, 6, 0],
//                   [5, 7, 3],
//                   [8, 1, 4]])

// goal_node = Node([[1, 2, 3],
//                   [4, 5, 6],
//                   [7, 8, 0]])

// import time
// start = time.time()

// path, node =  bfs(root_node, goal_node)

// end = time.time()
// print(end - start)




















//write c++ code to solve the puzzle 8 game in bfs
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int board[3][3];
    vector<Node> adjacency_list;
    Node(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                board[i][j]=0;
            }
        }
    }
    void generate_adjacency_list(){
        int empty_cell = 0;
        int row_empty_cell = col_empty_cell = 0;
        int tmp_array = NULL;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]==0){
                    tmp_array = board[i];
                    row_empty_cell = i;
                    col_empty_cell = j;
                    break;
                }
            }
        }
        int left = (row_empty_cell, col_empty_cell - 1);
        int right = (row_empty_cell, col_empty_cell + 1);
        int up = (row_empty_cell - 1, col_empty_cell);
        int down = (row_empty_cell + 1, col_empty_cell);
        int max_bound = 3;
        for(int direction : [left, up, right, down]){
            (row, col) = direction;
            if(row >= 0 and row < max_bound and col >= 0 and col < max_bound){
                adjacency_list.push_back(Node());
                adjacency_list[adjacency_list.size()-1].board[row_empty_cell][col_empty_cell] = adjacency_list[adjacency_list.size()-1].board[row][col];
                adjacency_list[adjacency_list.size()-1].board[row][col] = empty_cell;
            }
        }
    }
};


void bfs(Node root_node, Node goal_node){
    queue<Node> frontier;
    frontier.push(root_node);
    path = {root_node : None}; # The path where a node came from
    level = {root_node : 0};
    boards = [root_node.get_board()]; # List of boards to check a board was already generated
    i = 1;
    while(frontier.size()>0){
        next_frontier = [];
        for node_parent in frontier:
            if node_parent.get_board() == goal_node.get_board():
                return (path, node_parent);
            node_parent.generate_adjacency_list();
            for children in node_parent.get_adjacency_list():
                if children.get_board() not in boards:
                    boards.push_back(children.get_board());
                    next_frontier.push_back(children);
                    level[children] = i;
                    path[children] = node_parent;
        frontier = next_frontier;
        print("Level ", i);
        print("Number of nodes ", len(frontier));
        i += 1;
    }
    return (path, root_node);
}





