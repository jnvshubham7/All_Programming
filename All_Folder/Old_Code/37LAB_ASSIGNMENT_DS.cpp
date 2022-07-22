#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

bool linearSearch(int* begin, int* end, int val) { return find(begin, end, val) != end; }
bool binSearch(int* begin, int* end, int val) { return binary_search(begin, end, val); }

int timeTaken(int a[], int n, int value, bool func(int*, int*, const int))
{
         freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
        auto start = high_resolution_clock::now();
        cout << "searching for " << value << endl;
        if (func(a, a + n, value))
                cout << "found" << endl;
        else
                cout << "not found" << endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        return duration.count();
}

void sortAndTime(int* begin, int* end)
{
        auto start = high_resolution_clock::now();
        cout << "sorting " << endl;
        sort(begin, end);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "time taken to sort " << duration.count() << endl;
}

int main()
{
        int a[20];

        cout << "Linear search " << endl;
        cout << "first " << endl << timeTaken(a, 20, rand(), linearSearch) << endl;
        cout << "second " << endl << timeTaken(a, 20, a[10], linearSearch) << endl;
        sortAndTime(a, a + 20);
        cout << "binary search " << endl;
        cout << "first " << endl << timeTaken(a, 20, rand(), binSearch) << endl;
        cout << "second " << endl << timeTaken(a, 20, a[10], binSearch) << endl;
}