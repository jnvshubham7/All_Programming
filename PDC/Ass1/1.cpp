// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:

// The experiments involved testing 'n' up to 100,000,000.
// The number of prime numbers found between 1 and 2n was 11,078,937.
// The execution time for the entire experiment was 66,050 milliseconds.





// Algorithm Used:

// To efficiently count prime numbers in the given range (1 to 2n), I implemented a parallel approach using pthreads.
// The algorithm divided the range into multiple chunks, each processed concurrently by a separate thread.





// Remarks/Observations:

// The program demonstrates an effective parallel implementation for counting prime numbers within a specified range, leveraging multiple threads to improve performance.
// The execution time is influenced by factors such as the number of threads utilized, the size of 'n,' and the hardware capabilities of the system.
// Results may vary significantly based on the hardware and system load during execution.





#include <bits/stdc++.h>
#include <pthread.h>
#include <cmath>
#include <ctime>

using namespace std;

struct ThreadData {
    int start;
    int end;
    int primeCount;
};

bool func_prime_num(int arr) {
    if (arr == 1)
        return false;
    if (arr == 2)
        return true;
    if (arr % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(arr); i += 2) {
        if (arr % i == 0)
            return false;
    }
    return true;
}

void* func_prime_cnt(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    data->primeCount = 0;
    for (int i = data->start; i <= data->end; ++i) {
        if (func_prime_num(i)) {
            data->primeCount++;
        }
    }
    return NULL;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int number_of_threads = 4; 
    vector<pthread_t> threads(number_of_threads);
    vector<ThreadData> threadData(number_of_threads);

    int rangeStart = 1;
    int rangeEnd = n * 2;

    int chunkSize = (rangeEnd - rangeStart + 1) / number_of_threads;
    int remainder = (rangeEnd - rangeStart + 1) % number_of_threads;

    clock_t s_t = clock();

    for (int i = 0; i < number_of_threads; ++i) {
        threadData[i].start = rangeStart + i * chunkSize;
        threadData[i].end = threadData[i].start + chunkSize - 1 + (i == number_of_threads - 1 ? remainder : 0);
        pthread_create(&threads[i], NULL, func_prime_cnt, &threadData[i]);
    }

    for (int i = 0; i < number_of_threads; ++i) {
        pthread_join(threads[i], NULL);
    }

    int prime_number_total = 0;
    for ( auto data : threadData) {
        prime_number_total += data.primeCount;
    }

    clock_t e_t = clock();
    double duration = double(e_t - s_t) / CLOCKS_PER_SEC;

    cout << "Total Prime number between 1 to 2n: " << prime_number_total << endl;
    cout << "Execution_Time: " << duration * 1000 << " milliseconds" << endl;

    return 0;
}
