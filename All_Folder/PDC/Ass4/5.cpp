#include <iostream>
#include <pthread.h>

const int num_threads = 4;
const int n = 1000;
double* array;
double partial_sums[num_threads] = {0.0};
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* calculate_partial_sum(void* arg) {
    int thread_id = *(int*)arg;
    int elements_per_thread = n / num_threads;
    int start = thread_id * elements_per_thread;
    int end = (thread_id == num_threads - 1) ? n : start + elements_per_thread;

    double local_sum = 0.0;
    for (int i = start; i < end; i++) {
        local_sum += array[i];
    }

    pthread_mutex_lock(&mutex);
    partial_sums[thread_id] = local_sum;
    pthread_mutex_unlock(&mutex);

    return nullptr;
}

int main() {
    array = new double[n];
    for (int i = 0; i < n; i++)
        array[i] = i;

    pthread_t threads[num_threads];
    int thread_ids[num_threads];

    for (int i = 0; i < num_threads; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], nullptr, calculate_partial_sum, &thread_ids[i]);
    }

    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], nullptr);
    }

    double sum = 0.0;
    for (int i = 0; i < num_threads; i++) {
        sum += partial_sums[i];
    }

    double formula_sum = (double)n * (n - 1) / 2;
    std::cout << "N: " << n << std::endl;
    std::cout << "Loop Sum: " << sum << std::endl;
    std::cout << "Formula Sum: " << formula_sum << std::endl;

    delete[] array;
    return 0;
}
