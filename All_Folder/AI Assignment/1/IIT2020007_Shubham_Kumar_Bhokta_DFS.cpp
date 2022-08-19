
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



//    int initial[N][N] =
//     {
//         {1, 2, 3},
//         {5, 6, 0},
//         {7, 8, 4}
//     };
 
    
//     int final[N][N] =
//     {
//         {1, 2, 3},
//         {5, 8, 6},
//         {0, 7, 4}
//     };