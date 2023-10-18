// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007

// Experimental Set-up:
// The code was compiled and executed on a computer with a multi-core processor, utilizing at least 8 cores to leverage multi-threading capabilities. The compilation was done using the g++ compiler with default flags.
// Computer: The experiments were conducted on a laptop equipped with VS Code for all coding tasks.
// Compiler: The code was compiled using a C++ compiler.
// Compilation flags: No special compilation flags were used.

// Summary of Results:
// The code implemented a matrix multiplication algorithm using multiple threads for parallel computation. The number of threads used was 8.

// Algorithm Used:
// The code utilized a straightforward matrix multiplication algorithm, known as the "naive" or "brute-force" matrix multiplication method. It multiplied two square matrices, mat_a and mat_b, storing the result in mat_result.

// Remarks/Observations:

// This implementation demonstrates basic parallel processing using threads for matrix multiplication. It is suitable for larger matrices, but for very large matrices or high-performance computing, more optimized algorithms like Strassen's algorithm or parallel libraries like OpenMP or MPI may be more appropriate.

// The size of the matrices (mat_sz) and the number of threads (num_thread) can be adjusted based on the available system resources and the size of the matrices being multiplied.

// It is crucial to ensure that the matrices are appropriately initialized before running the multiplication.

// The code does not include any error handling or performance measurement. In practice, it is essential to handle possible errors and measure the performance to evaluate the efficiency of the parallel implementation compared to a sequential one.

// For even larger matrices, it might be beneficial to consider optimizing memory access patterns (e.g., blocking or tiling) to improve cache locality and reduce cache misses. However, implementing such optimizations might make the code more complex.







#include <bits/stdc++.h>
#include <pthread.h>

const int mat_sz = 8192;
const int num_thread = 8;

int mat_a[mat_sz][mat_sz];
int mat_b[mat_sz][mat_sz]; 
int mat_result[mat_sz][mat_sz]; 

void* multiply(void* arg) {
    int thread_id = *(int*)arg;
    int rows_per_thread = mat_sz / num_thread;
    int st_row = thread_id * rows_per_thread;
    int en_row = (thread_id == num_thread - 1) ? mat_sz : (st_row + rows_per_thread);

    for (int i = st_row; i < en_row; i++) {
        for (int j = 0; j < mat_sz; j++) {
            mat_result[i][j] = 0;
            for (int k = 0; k < mat_sz; k++) {
                mat_result[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[num_thread];
    int thread_ids[num_thread];

    for (int i = 0; i < num_thread; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, multiply, (void*)&thread_ids[i]);
    }

    for (int i = 0; i < num_thread; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
