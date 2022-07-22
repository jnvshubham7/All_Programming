#include <iostream>
using namespace std;
int n,m;
char a[1002][1002];
int path;
string word;
int row[] = {-1, 0, 1, 0};
int col[] = {0, -1, 0, 1};
bool issafe(int x, int y, int prevx, int prevy)
{
   return (x >= 0 && x < n && y >= 0 && y < m && !(prevx == x && prevy == y));#include <iostream>
using namespace std;
int n,m;
char a[1002][1002];
int path;
string word;
int row[] = {-1, 0, 1, 0};
int col[] = {0, -1, 0, 1};
bool issafe(int x, int y, int prevx, int prevy)
{
   return (x >= 0 && x < n && y >= 0 && y < m && !(prevx == x && prevy == y));
          
}

void dfs(int x, int y, int prevx, int prevy, int index, int wrdlen)
{
     if (index > wrdlen || a[x][y] != word[index])
          return;

     if (index == wrdlen) // && word[index]==a[x][y])
     {
          path++;
          return;
     }
     for (int i = 0; i < 4; i++)
     {
          int nr = x + row[i];
          int ncl = y + col[i];
          if (issafe(nr, ncl, prevx, prevy))
          {
               dfs(nr, ncl, x, y, index + 1, wrdlen);
          }
     }
}
void find(int wrdlen)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (a[i][j] == word[0])
               {
                    dfs(i, j, -1, -1, 0, wrdlen);
               }
          }
     }
}
int main()
{
     cin >> n >> m;

     word.push_back('B');
     word += 'O';
     word += 'Y';
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
               cin >> a[i][j];
     }
     find(2);
     cout << path << endl;
}
          
}

void dfs(int x, int y, int prevx, int prevy, int index, int wrdlen)
{
     if (index > wrdlen || a[x][y] != word[index])
          return;

     if (index == wrdlen) // && word[index]==a[x][y])
     {
          path++;
          return;
     }
     for (int i = 0; i < 4; i++)
     {
          int nr = x + row[i];
          int ncl = y + col[i];
          if (issafe(nr, ncl, prevx, prevy))
          {
               dfs(nr, ncl, x, y, index + 1, wrdlen);
          }
     }
}
void find(int wrdlen)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (a[i][j] == word[0])
               {
                    dfs(i, j, -1, -1, 0, wrdlen);
               }
          }
     }
}
int main()
{
     cin >> n >> m;

     word.push_back('B');
     word += 'O';
     word += 'Y';
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
               cin >> a[i][j];
     }
     find(2);
     cout << path << endl;
}