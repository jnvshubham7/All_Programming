


// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:

// Enter the value of N: 1
// Estimated value of pi: 4.000000



// Algorithm Used:
// i have used the same algorithm as given in the question.
// i have just added the openmp pragma to parallelize the code.




// Remarks/Observations:









#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <time.h>

int main() {
    int N, i, cnt = 0;
    double x, y, dest, PiEstimate;
    printf("enter value of n ");
    scanf("%d", &N);
    srand(time(NULL));
#pragma omp parallel for private(x, y, dest) reduction(+:cnt)
    for (i = 0; i < N; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        dest=x * x + y * y;
        if (dest <= 1.0) {
            cnt++;
        }
    }  
    PiEstimate = 4.0 * cnt / N;
    printf("estimated value of n is ==  %f\n", PiEstimate);
    return 0;
}




