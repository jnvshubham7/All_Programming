// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:


// unsorted_arr 5 4 5 6 7 1 
// sorted_arr 1 4 5 5 6 7 






// Algorithm Used:
//used odd even sort algorithm to sort the array in parallel
//using openmp




// Remarks/Observations:



#include <bits/stdc++.h>
#include <omp.h>

using namespace std;

void func_open_mp(vector<int>& v) {
    int n = v.size();

    bool sort_flag = false;

    while (!sort_flag) 
    
    {
        sort_flag = true;

        #pragma omp parallel for shared(v, n, sort_flag)
        for (int i = 1; i <= n - 2; i += 2) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                sort_flag = false;
            }
        }

        #pragma omp parallel for shared(v, n, sort_flag)
        for (int i = 0; i <= n - 2; i += 2) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                sort_flag = false;
            }
        }



    }
}

int main() {
    vector<int> v = {5, 4, 5, 6, 7, 1};

    
    int n = v.size();

    cout << "unsorted_arr ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    func_open_mp(v);

    cout << "sorted_arr ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
