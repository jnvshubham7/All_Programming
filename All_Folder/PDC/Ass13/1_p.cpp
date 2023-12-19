#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <math.h>
#include <time.h>

int main(int argc, char* argv[]) {
    int rank, size, i, count = 0, total_count, N;
    double x, y, distance, pi_estimate;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Get the value of N from the user (assuming it's the same for all processes)
    if (rank == 0) {
        printf("Enter the value of N: ");
        scanf("%d", &N);
    }

    // Broadcast N to all processes
    MPI_Bcast(&N, 1, MPI_INT, 0, MPI_COMM_WORLD);

    // Seed the random number generator with the current time
    srand(time(NULL) + rank);

    // Number of darts to throw per process
    int darts_per_process = N / size;

    // Simulate dart throws and count the number of hits inside the circle
    for (i = 0; i < darts_per_process; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        distance = x * x + y * y;

        if (distance <= 1.0) {
            count++;
        }
    }

    // Sum up the counts from all processes
    MPI_Reduce(&count, &total_count, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    // Calculate the final estimate of pi
    if (rank == 0) {
        pi_estimate = 4.0 * total_count / N;
        printf("Estimated value of pi: %f\n", pi_estimate);
    }

    MPI_Finalize();

    return 0;
}
