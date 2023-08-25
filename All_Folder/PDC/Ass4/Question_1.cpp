


// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// N: 1000
// Loop Sum: 499500
// Formula Sum: 499500




// Algorithm Used:
// Utilized Algorithm:
// This code employs parallel summation by employing multiple threads for the calculation of array element sums.


// Remarks/Observations:
// - The array gets divided into segments, with each thread responsible for summing a specific segment.
// - Mutex is applied to coordinate updates to partial sums, mitigating potential race conditions.
// - The ultimate sum is derived by aggregating partial sums contributed by all threads.
// - The code contrasts the computed sum against the anticipated sum calculated through a formula.
// - Particularly effective for larger arrays, yet the creation and synchronization of threads introduce overhead.
// - The code could benefit from load balancing and error handling to further elevate its performance.









#include<iostream>
using namespace std;




#include <pthread.h>

const int nm_thrd = 4;
const int arry_sz = 1000;

double* array;
double parti_sum[nm_thrd] = {0};
pthread_mutex_t mutex_sum;

void* calcute_part_sum(void* arg) {
    int thrd_id = *((int*)arg);
    int chnk_sz = arry_sz / nm_thrd;
    int strt_indx = thrd_id * chnk_sz;
    int end_indx = (thrd_id == nm_thrd - 1) ? arry_sz : strt_indx + chnk_sz;

    double local_sum = 0;
    for (int i = strt_indx; i < end_indx; i++) {
        local_sum += array[i];
    }

    pthread_mutex_lock(&mutex_sum);
    parti_sum[thrd_id] = local_sum;
    pthread_mutex_unlock(&mutex_sum);

    return NULL;
}

int main() {
    int n = arry_sz;
    array = new double[n];
    for (int i = 0; i < n; i++)
        array[i] = i;

    pthread_t threads[nm_thrd];
    int thread_ids[nm_thrd];

    pthread_mutex_init(&mutex_sum, NULL);

    for (int i = 0; i < nm_thrd; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, calcute_part_sum, &thread_ids[i]);
    }

    for (int i = 0; i < nm_thrd; i++) {
        pthread_join(threads[i], NULL);
    }

    double sum = 0;
    for (int i = 0; i < nm_thrd; i++) {
        sum += parti_sum[i];
    }

    double forml_sum = (double)n * (n - 1) / 2;

    std::cout << "N: " << n << std::endl;
    std::cout << "Loop Sum: " << sum << std::endl;
    std::cout << "Formula Sum: " << forml_sum << std::endl;

    delete[] array;
    pthread_mutex_destroy(&mutex_sum);

    return 0;
}
