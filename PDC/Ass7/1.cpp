// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// no of elements  5
// Enter 5 elements: 6 5 8 4 2
// Ans : 2 4 5 6 8






// Algorithm Used:
//using simple merge sort 





// Remarks/Observations:














#include <bits/stdc++.h>

using namespace std;

void merge(int v[], int l[], int r[], int lsz, int rsz) {
    int i = 0, j = 0, k = 0;

    while (i < lsz && j < rsz) {
        if (l[i] <= r[j]) {
            v[k++] = l[i++];
        } else {
            v[k++] = r[j++];
        }
    }

    while (i < lsz) {
        v[k++] = l[i++];
    }

    while (j < rsz) {
        v[k++] = r[j++];
    }
}

void merge_sort(int v[], int sz) {
    if (sz <= 1) {
        return; 
    }

    int mid = sz / 2;
    int l[mid];
    int r[sz - mid];

    for (int i = 0; i < mid; i++) {
        l[i] = v[i];
    }

    for (int i = mid; i < sz; i++) {
        r[i - mid] = v[i];
    }

    merge_sort(l, mid);
    merge_sort(r, sz - mid);

    merge(v, l, r, mid, sz - mid);
}

int main() {
    int N;
    cout << "no of elements  ";
   cin >> N;

    int v[N];

   cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    merge_sort(v, N);

    cout << "Ans : ";
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
  cout << endl;

    return 0;
}
