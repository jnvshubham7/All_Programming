#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007
#define inf 1e17
#define endl '\n'

vector<int> adjancy[MAX];
vector<int> adjancy_Inv[MAX];
bool visited[MAX];
bool visited_Inv[MAX];
stack<int> s;
int arr[MAX];
int cnt = 1;

void edge_add_Inverse(int a, int b)
{
    adjancy_Inv[b].push_back(a);
}

void edge_add(int a, int b)
{
    adjancy[a].push_back(b);
}

void first_dfs(int u)
{
    if (visited[u])
        return;

    visited[u] = 1;

    for (int i = 0; i < adjancy[u].size(); i++)
        first_dfs(adjancy[u][i]);

    s.push(u);
}

void second_dfs(int u)
{
    if (visited_Inv[u])
        return;

    visited_Inv[u] = 1;

    for (int i = 0; i < adjancy_Inv[u].size(); i++)
        second_dfs(adjancy_Inv[u][i]);

    arr[u] = cnt;
}

void is_Satisfiable(int n, int m, int a[], int b[])
{
    for (int i = 0; i < m; i++)
    {
        if (a[i] > 0 && b[i] > 0)
        {
         edge_add(a[i] + n, b[i]);
         edge_add_Inverse(a[i] + n, b[i]);
         edge_add(b[i] + n, a[i]);
         edge_add_Inverse(b[i] + n, a[i]);
        }

        else if (a[i] > 0 && b[i] < 0)
        {
         edge_add(a[i] + n, n - b[i]);
         edge_add_Inverse(a[i] + n, n - b[i]);
         edge_add(-b[i], a[i]);
         edge_add_Inverse(-b[i], a[i]);
        }

        else if (a[i] < 0 && b[i] > 0)
        {
         edge_add(-a[i], b[i]);
         edge_add_Inverse(-a[i], b[i]);
         edge_add(b[i] + n, n - a[i]);
         edge_add_Inverse(b[i] + n, n - a[i]);
        }

        else
        {
         edge_add(-a[i], n - b[i]);
         edge_add_Inverse(-a[i], n - b[i]);
         edge_add(-b[i], n - a[i]);
         edge_add_Inverse(-b[i], n - a[i]);
        }
    }

    for (int i = 1; i <= 2 * n; i++)
        if (!visited[i])
            first_dfs(i);

    while (!s.empty())
    {
        int n = s.top();
        s.pop();

        if (!visited_Inv[n])
        {
            second_dfs(n);
            cnt++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i + n])
        {
            cout << "The given expression "
                    "is unsatisfiable."
                 << endl;
            return;
        }
    }

    cout << "The given expression is satisfiable."
         << endl;
    return;
}
