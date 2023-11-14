#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <time.h>

int main() {
    int N, i, count = 0;
    double x, y, distance, pi_estimate;

    // Get the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Simulate dart throws and count the number of hits inside the circle
#pragma omp parallel for private(x, y, distance) reduction(+:count)
    for (i = 0; i < N; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        distance = x * x + y * y;

        if (distance <= 1.0) {
            count++;
        }
    }

    // Calculate the final estimate of pi
    pi_estimate = 4.0 * count / N;
    printf("Estimated value of pi: %f\n", pi_estimate);

    return 0;
}
