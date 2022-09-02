#include <bits/stdc++.h>
using namespace std;
#define N 8

int solveUtil(int x, int y, int movei, int sol[N][N],

              int Xchange[], int Ychange[]);
int isValid(int x, int y, int sol[N][N]) {

  return (x >= 0 && x < N && y >= 0 && y < N

          && sol[x][y] == -1);
}
void printSolution(int sol[N][N])

{

  for (int x = 0; x < N; x++) {
    for (int y = 0; y < N; y++)

      cout << " " << setw(2) << sol[x][y] << " ";

    cout << endl;
  }
}

int solve() {

  int sol[N][N];
  for (int x = 0; x < N; x++)
    for (int y = 0; y < N; y++)

      sol[x][y] = -1;
  int Xchange[8] = {2, 1, -1, -2, -2, -1, 1, 2};
  int Ychange[8] = {1, 2, 2, 1, -1, -2, -2, -1};
  sol[0][0] = 0;

  if (solveUtil(0, 0, 1, sol, Xchange, Ychange) == 0) {

    cout << "Solution does not exist";

    return 0;
  }

  else

    printSolution(sol);
  return 1;
}
int solveUtil(int x, int y, int movei, int sol[N][N],

              int Xchange[8], int Ychange[8]) {

  int k, next_x, next_y;

  if (movei == N * N)

    return 1;
  for (k = 0; k < 8; k++) {

    next_x = x + Xchange[k];

    next_y = y + Ychange[k];

    if (isValid(next_x, next_y, sol)) {
      sol[next_x][next_y] = movei;

      if (solveUtil(next_x, next_y, movei + 1, sol,

                    Xchange, Ychange) == 1)

        return 1;

      else

        sol[next_x][next_y] = -1;
    }
  }

  return 0;
}

int main() {
  solve();
  return 0;
}
