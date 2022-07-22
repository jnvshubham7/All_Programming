#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int timeTaken(int a[], int index)
{
         freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
        auto start = high_resolution_clock::now();
        cout << "accessing index " << index << ": value is " << a[index] << endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        return duration.count();
}

int main()
{
        int a[20];
        int indexToAccess[] = { 1, 10, 19 };
        for (int i = 0; i < 3; i++)
                cout << "Time taken to access " << indexToAccess[i] << " is " << timeTaken(a, indexToAccess[i]) << endl;
}