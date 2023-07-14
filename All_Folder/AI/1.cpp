// tic tac toe using magic square
// 1. 1 2 3
// 2. 4 5 6
// 3. 7 8 9

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i][n - i - 1];
    }
    if (sum != sum1)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum2 += a[i][j];
        }
        if (sum2 != sum)
        {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum2 += a[j][i];
        }
        if (sum2 != sum)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
