// https://leetcode.com/discuss/interview-question/2323439/Google-OA-or-Intern-2023-or-On-Campus-or-India-or-July-2022


/*
You are given a 2-dimensional matrix in the form of a grid containing integers. Dimensions of the matrix are N*M with N rows and M columns. 
If you are standing at cell (X,Y) then you can jump from that cell to any adjacent cell within the boundaries of the grid. 
For example, you can move to the following places from (X,Y):

To the cell (X+1,Y), if X+1<=N and Y<=M
To the cell (X,Y+1), if X<=N and Y+1<=M
To the cell (X-1,Y), if X-1>=1 and Y<=M
To the cell (X,Y-1), if X<=N and Y-1>=1
You can also jump from the current cell C to another cell A if the value in cell A divides the value in cell C. 
In other words, you can jump from a cell to its divisors containing cells.

Task

Answer Q queries and each query consistes of two cells u and v. 
Determine whether you can reach from u to v in atmost 4 jumps. Print YES if it is possible, else, print NO.

Example

Assumptions

N=3
M=6
The grid is given with values as shown:

2	3	25	9	7	50
3	11	10	12	33	6
5	20	1	8	15	36
The top row can be taken as 1 and increasing down to N. Left column number can be taken as 1 and increasing right to M.

Approach

Suppose Q=3:

u = (3,6), v = (1,1). You are currently standing at (3,6) cell containing the value 36. You can take the following jumps:

From (3,6) to (2,4) as 36 is divisible by 12.
From (2,4) to (1,1) as 12 is divisible by 2.
Hence, you can jump from u to v in less than 4 jumps
Therefore the answer is YES.
u = (1,6), v = (3,3). You are currently standing at (1,6) cell containing the value 50. You can take the following jumps:

From (1,6) to (2,3) as 50 is divisible by 10.
From (2,3) to (3,1) as 10 is divisible by 5.
From (3,1) to (3,3) as 5 is divisible by 1.
Hence, you can jump from u to v in less than 4 jumps
Therefore the answer is YES.
You could also have gone from (1,6) to (2,6) by adjacent jumpring and then from (2,6) to (3,3) as divisor jumping.

u = (3,1), v = (1,5). You are currently standing at (3,1) cell containing the value 5. You cannot manage to jump to cell (1,4) in atmost 4 jumps.
Therefore the answer is NO.

*/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {


// public:
  
//     bool solve(vector<vector<int>>& grid, int x, int y) {
//         if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size()) return false;
//         if(grid[x][y]==0) return false;
//         if(x==0 && y==0) return true;
//         grid[x][y] = 0;
//         return solve(grid, x-1, y) || solve(grid, x, y-1) || solve(grid, x+1, y) || solve(grid, x, y+1);
//     }
    
//     string canReach(vector<vector<int>>& grid, int x1, int y1, int x2, int y2) {
//         if(!solve(grid, x1, y1)) return "NO";
//         if(!solve(grid, x2, y2)) return "NO";
//       //  return canReach(grid, x1, y1, x2, y2) ? "YES" : "NO";

     
//     }
// };

// int main() {
//     Solution s;
//     vector<vector<int>> grid = {{2,3,25,9,7,50},{3,11,10,12,33,6},{5,20,1,8,15,36}};
//     cout << s.canReach(grid, 0, 0, 2, 4) << endl;
//     cout << s.canReach(grid, 0, 0, 1, 6) << endl;
//     cout << s.canReach(grid, 0, 0, 3, 1) << endl;
//     cout << s.canReach(grid, 0, 0, 3, 5) << endl;
//     return 0;
// }







#include  <bits/stdc++.h>
using namespace std;
 
#define     test(t)             int t; cin>>t; while(t--)
#define     pb                  push_back
#define     ll                  long long
#define     vi                  vector<int>
#define     vvi                 vector<vi>
#define     ff                  first
#define     ss                  second
#define     pii                 pair<int,int>
#define     all(a)              a.begin(),a.end()
#define     inf                  1000000007
#define     br                  cout << endl;


// visited grid ki jarurat isliye nhi padegi ki me keval 4 hi baar chal sakta hu,
// so jab k == 0 ho jayega tab wo wese hi return ho jayega.
bool isValid(int x, int y, int n, int m)
{
    return x>=0 and y >=0 and x<n and y<m;
}

map<pair<int, pair<int, int>>, vector<pair<int,int>>> mapMaker(int n, int m , vvi &grid)
{
    std::vector<pair<int, pair<int, int>>> values;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            values.pb({grid[i][j], {i, j}});
        }
    }

    sort(values.begin(), values.end());

// key itni badi isliye taki agar values grid me common values bhi hui toh
// unke indexes se me unko alag alag pehchan saku.
    map<pair<int, pair<int, int>>, vector<pair<int,int>>> map;

    for(int i=0; i<values.size(); i++){
        for(int j=0; (j<values.size()and  values[i].ff >= values[j].ff); j++){

            if(values[i].ff % values[j].ff == 0)
            {
                map[{values[i].ff, {values[i].ss.ff, values[i].ss.ss}}].push_back({values[j].ss.ff, values[j].ss.ss});
            }
        }
    }

    return map;
}

bool func(int n, int m, vvi &grid, int x1, int y1, int x2, int y2, int k,
    map<pair<int, pair<int, int>>, vector<pair<int,int>>> &map)
{
    
    if(!isValid(x1, y1, n, m)) return 0;

    if(x1 == x2 and y1 == y2) return 1;
    if(k == 0) return 0;


// here are those 4 directions
    if(func(n, m, grid, x1+1, y1, x2, y2, k-1, map)) return 1;
    if(func(n, m, grid, x1, y1+1, x2, y2, k-1, map)) return 1;
    if(func(n, m, grid, x1-1, y1, x2, y2, k-1, map)) return 1;
    if(func(n, m, grid, x1, y1-1, x2, y2, k-1, map)) return 1;

    std::vector<pair<int,int>> v = map[{grid[x1][y1], {x1, y1}}];


// here are grid[x1][y1] divisor traverse loop..
    for(int i=0; i<v.size(); i++){
        int p = v[i].ff;
        int q = v[i].ss;
        if(func(n, m, grid, p, q, x2,y2, k-1, map)){
            return 1;
        }
    }

    return 0;
}

string canReach(int n, int m, vvi grid, int x1, int y1, int x2, int y2, int k, 
    map<pair<int, pair<int, int>>, vector<pair<int,int>>> &map)
{
    if(x1 == x2 and y1 == y2) return "YES";

    if(func(n, m, grid, x1, y1, x2, y2, k, map)){
        return "YES";
    }
    return "NO";
}


signed main()
{   
    int n, m; cin >> n >> m;
    vvi grid(n, vi(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    // ye mene baad me add kiya
    map<pair<int, pair<int, int>>, vector<pair<int,int>>> map = mapMaker(n, m, grid);

    int q; cin >> q;
    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >>  y1 >> x2 >> y2;

        // aur yaha par k=4 alag se mene add kiya tha..
        cout << canReach(n, m, grid, x1, y1, x2, y2, 4, map);
    }

}