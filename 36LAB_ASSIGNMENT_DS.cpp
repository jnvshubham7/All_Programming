#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int shiftAndInsert(int a[], int index, int value, int& filled, int maxCapacity)
{
         freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
        if (filled == maxCapacity) {
                cout << "Cant insert new value, array full " << endl;
                return 0;
        }

        int i = filled, tmp;
        while (i != index) {
                tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
        }
        a[index] = value;
        filled++;
        return 1;
}
int timeTaken(int a[], int index, int value, int& filled, int maxCapacity)
{
        auto start = high_resolution_clock::now();
        cout << "Inserting at index " << index << endl;
        shiftAndInsert(a, index, value, filled, maxCapacity);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        return duration.count();
}

int main()
{
        int a[20];
        int filled = 17;
        int indexToInsert[] = { 0, 10, 19 };
        for (int i = 0; i < 3; i++)
                cout << "Time taken to insert at " << indexToInsert[i] << " is " << timeTaken(a, indexToInsert[i], rand(), filled, 20) << endl;
}