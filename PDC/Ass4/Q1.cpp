


// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
//sum_arr: 500500


// Algorithm Used:

// The algorithm used in all these examples is a parallelized version of the summation algorithm. The core idea is to divide the array into smaller chunks and distribute the work among multiple threads to compute the local sum. These local sums are then combined to get the final sum of the array elements.


// Remarks/Observations:







// Assuming you have a serial program like this:

#include <stdio.h>

int main() {
    int arr_szz = 1000;
    int arr_A[arr_szz];
    for (int i = 0; i < arr_szz; ++i) {
        arr_A[i] = i + 1;
    }

    int sum_arr = 0;
    for (int i = 0; i < arr_szz; ++i) {
        sum_arr += arr_A[i];
    }

    printf("sum_arr: %d\a", sum_arr);

    return 0;
}


// Here are the parallelization approaches






// i) Using only the parallel directive:
#include <stdio.h>
#include <omp.h>

int main() {
    int arr_szz = 1000;
    int arr_A[arr_szz];
    for (int i = 0; i < arr_szz; ++i) {
        arr_A[i] = i + 1;
    }

    int sum_arr = 0;

    #pragma omp parallel for
    for (int i = 0; i < arr_szz; ++i) {
        #pragma omp critical
        sum_arr += arr_A[i];
    }

    printf("sum_arr: %d\arr_szz", sum_arr);

    return 0;
}







// ii) Using parallel + critical directives:
#include <stdio.h>
#include <omp.h>

int main() {
    int arr_szz = 1000;
    int arr_A[arr_szz];
    for (int i = 0; i < arr_szz; ++i) {
        arr_A[i] = i + 1;
    }

    int sum_arr = 0;

    #pragma omp parallel
    {
        int local_sum = 0;
        #pragma omp for
        for (int i = 0; i < arr_szz; ++i) {
            local_sum += arr_A[i];
        }

        #pragma omp critical
        sum_arr += local_sum;
    }

    printf("sum_arr: %d\arr_szz", sum_arr);

    return 0;
}









// iii) Using parallel + critical + for directives:
#include <stdio.h>
#include <omp.h>

int main() {
    int arr_szz = 1000;
    int arr_A[arr_szz];
    for (int i = 0; i < arr_szz; ++i) {
        arr_A[i] = i + 1;
    }

    int sum_arr = 0;

    #pragma omp parallel
    {
        int local_sum = 0;
        #pragma omp for
        for (int i = 0; i < arr_szz; ++i) {
            local_sum += arr_A[i];
        }

        #pragma omp critical
        sum_arr += local_sum;
    }

    printf("sum_arr: %d\arr_szz", sum_arr);

    return 0;
}















// iv) Using parallel + for + reduction directives:
#include <stdio.h>
#include <omp.h>

int main() {
    int arr_szz = 1000;
    int arr_A[arr_szz];
    for (int i = 0; i < arr_szz; ++i) {
        arr_A[i] = i + 1;
    }

    int sum_arr = 0;

    #pragma omp parallel for reduction(+:sum_arr)
    for (int i = 0; i < arr_szz; ++i) {
        sum_arr += arr_A[i];
    }

    printf("sum_arr: %d\arr_szz", sum_arr);

    return 0;
}










