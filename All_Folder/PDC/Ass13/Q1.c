


// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// Enter the value of N: 3
// Estimated value of pi: 1.333333




// Algorithm Used:
// i have used the same algorithm as given in the question. 
//i have just added the openmp pragma to parallelize the code.



// Remarks/Observations:





#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <math.h>
#include <time.h>

int main(int argc, char* argv[]) {
    int rank, sz, i, cnt = 0, total_cnt, N;
    double x, y, dest, PiEstimate;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &sz);

    if (rank == 0) {
        printf("enter value of n ");
        scanf("%d", &N);
    }

    MPI_Bcast(&N, 1, MPI_INT, 0, MPI_COMM_WORLD);

    srand(time(NULL) + rank);

    int DartPerProcess = N / sz;

    for (i = 0; i < DartPerProcess; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        dest=x * x + y * y;

        if (dest <= 1.0) {
            cnt++;
        }
    }

    
    MPI_Reduce(&cnt, &total_cnt, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        PiEstimate = 4.0 * total_cnt / N;
        printf("estimated value of n is ==  %f\n", PiEstimate);
    }
    MPI_Finalize();
    return 0;
}






