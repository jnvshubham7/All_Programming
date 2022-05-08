#include <bits/stdc++.h>
using namespace std;
#define ll long long


int mxch(int currRow, int c1, int c2, vector<vector<int>> &grid) {
    // Return 0 if current coordinates are not valid.
    if (currRow == grid.size() || c1 < 0 || c1 >= grid[0].size() || c2 < 0 || c2 >= grid[0].size() || c1 > c2) {
        return 0;
    }

    
    int maximumChocolates = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            // Updating the variable 'maximumChocolates'.
            maximumChocolates = max(maximumChocolates, mxch(currRow + 1, c1 + i, c2 + j, grid));
        }
    }

   
    if (c1 != c2) {
        maximumChocolates += grid[currRow][c2];
    }

    return (maximumChocolates + grid[currRow][c1]);
}

int mxc(int r, int c, vector<vector<int>> &grid) {
    return mxch(0, 0, grid[0].size() - 1, grid);
}

int main(){
	int test_case;
	cin >> test_case;
	while(test_case--){
		int r,c;
      cin>>r>>c;
      vector<vector<int>> grid(r,vector<int> (c,0));
      for(int i=0;i<r;i++)
      {
 for(int j=0;j<c;j++)
         {
             cin>>grid[i][j];
         }
      }
        
            
      
		int ans = mxc(r,c,grid);
      cout<<ans<<endl;
	}
	return 0;
}