#include <bits/stdc++.h>
using namespace std;
int main()
{
         freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
        int a[100];
        cout << "Size of array of 100 int is " << sizeof(a) << endl;
        for (int i = 0; i < 75; i++)
                a[i] = rand();
        cout << "Size of array of 100 int after modification is " << sizeof(a) << endl;
        int* b = a;
        cout << "Size of pointer to array is " << sizeof(b) << endl;
}