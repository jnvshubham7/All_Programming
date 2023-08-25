

// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// ar_b[10] = 497
// ar_b[11] = 502
// ar_b[12] = 547
// ar_b[13] = 628
// ar_b[14] = 655
// ar_b[15] = 716
// ar_b[16] = 807
// ar_b[17] = 902
// ar_b[18] = 944
// ar_b[19] = 971
// .
// .
// .

// until 

// ar_b[1020] = 11846
// ar_b[1021] = 11855
// ar_b[1022] = 11870
// ar_b[1023] = 11872



// Algorithm: This code uses pthreads for parallel prefix sum computation. 
//It divides the input array among threads, calculates prefix sums independently, and adjusts them using the previous segment's last value.




// Remarks: The code showcases a basic parallel prefix sum approach with pthreads. 
//However, mutex usage may limit performance. Advanced methods like "scan" algorithms offer better parallelization. 
//Missing error handling for pthread functions and uneven load distribution are concerns.














#include<bits/stdc++.h>
using namespace std;




#include <pthread.h>

const int num_thrad = 4; // Number of threads
const int size = 1024;
int ar_a[size]; // Input array
int ar_b[size]; // Prefix sum array
pthread_mutex_t mutex;

void* parallelPrefixSum(void* arg) {
    int thred_id = *((int*)arg);
    int chnk_sz = size / num_thrad;
    int strt = thred_id * chnk_sz;
    int end_e = (thred_id == num_thrad - 1) ? size : strt + chnk_sz;

    for (int i = strt + 1; i < end_e; ++i) {
        ar_b[i] = ar_b[i - 1] + ar_a[i - 1];
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[num_thrad];
    int threadIds[num_thrad];

    
    for (int i = 0; i < size; ++i) {
        ar_a[i] = rand() % 100; 
    }

    ar_b[0] = 0;

    for (int i = 0; i < num_thrad; ++i) {
        threadIds[i] = i;
        pthread_create(&threads[i], NULL, parallelPrefixSum, &threadIds[i]);
    }

    for (int i = 0; i < num_thrad; ++i) {
        pthread_join(threads[i], NULL);
    }

    // Adjust prefix sum values by adding the last value of the previous chunk
    for (int i = 1; i < num_thrad; ++i) {
        int strt = i * (size / num_thrad);
        ar_b[strt] += ar_b[strt - 1];
    }

    // Print the result
    for (int i = 0; i < size; ++i) {
        std::cout << "ar_b[" << i << "] = " << ar_b[i] << std::endl;
    }

    return 0;
}
