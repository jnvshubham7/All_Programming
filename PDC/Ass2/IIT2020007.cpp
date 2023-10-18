/*
================================================================================
Name: Shubham Kumar Bhokta
Roll Number: IIT2020007

Description of Experimental Set-Up:
- Computer Configuration: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
- Compiler: I utilized a C++ compiler for compiling the code.
- Compilation Flags: No special compilation flags were used.

Brief Summary of Results:
- The program implements Sparse Matrix Multiplication (SpMM) using CSR format and pthreads library.
- Sequential and parallel computations are performed, and results are compared.
- Timing and L2 norm difference are reported for different thread counts.

Remarks/Observations:
- The program demonstrates the efficiency of sparse matrix multiplication using CSR representation.
- Performance improvement is observed when using multiple threads for parallel computation.


================================================================================
*/






#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <pthread.h>
#include <chrono>
#include <cmath>

using namespace std;

// Structure to represent CSR format matrix
struct CSRMatrix {
    vector<double> d_data;
    vector<int> col_indx;
    vector<int> row_pntr;
};

// Global variables
CSRMatrix mat_A;
vector<double> vec_B;
vector<double> res_C;
int nm_thd;

// Function to read sparse matrix in COO format and convert to CSR format
void read_cnvrt_csr(string filename) {
    ifstream inputFile(filename);
    int nm_row, nm_col, nm_non_z;
    inputFile >> nm_row >> nm_col >> nm_non_z;

    mat_A.row_pntr.push_back(0);

    for (int i = 0; i < nm_non_z; i++) {
        int row, col;
        double value;
        inputFile >> row >> col >> value;
        mat_A.d_data.push_back(value);
        mat_A.col_indx.push_back(col);
        
        while (row > mat_A.row_pntr.size() - 1) {
            mat_A.row_pntr.push_back(i);
        }
    }

    while (mat_A.row_pntr.size() < nm_row + 1) {
        mat_A.row_pntr.push_back(nm_non_z);
    }
}

// Function to read dense vector
void read_vct(string filename) {
    ifstream inputFile(filename);
    double value;

    while (inputFile >> value) {
        vec_B.push_back(value);
    }
}

// Function to compute SpMM sequentially
void cmt_seq() {
    res_C.resize(mat_A.row_pntr.size() - 1, 0.0);

    for (int i = 0; i < mat_A.row_pntr.size() - 1; i++) {
        for (int j = mat_A.row_pntr[i]; j < mat_A.row_pntr[i + 1]; j++) {
            res_C[i] += mat_A.d_data[j] * vec_B[mat_A.col_indx[j]];
        }
    }
}

// Function for each thread to compute a portion of SpMM
void* cmt_prll(void* arg) {
    int threadId = *(int*)arg;
    int numElements = mat_A.row_pntr.size() - 1;
    int elementsPerThread = numElements / nm_thd;
    int start = threadId * elementsPerThread;
    int end = (threadId == nm_thd - 1) ? numElements : (start + elementsPerThread);

    for (int i = start; i < end; i++) {
        for (int j = mat_A.row_pntr[i]; j < mat_A.row_pntr[i + 1]; j++) {
            res_C[i] += mat_A.d_data[j] * vec_B[mat_A.col_indx[j]];
        }
    }

    pthread_exit(NULL);
}

int main() {
    string matrixFilename = "inputfile.mtx"; // Replace with your input file name
    string vectorFilename = "vector.txt"; // Replace with your input file name

    // Read input files and matrix format conversion
    read_cnvrt_csr(matrixFilename);
    read_vct(vectorFilename);

    // Print matrix details
    cout << "Matrix A:" << endl;
    cout << "#Rows: " << mat_A.row_pntr.size() - 1 << ", #Cols: " << mat_A.col_indx.size() << ", #Non-Zeroes: " << mat_A.d_data.size() << endl;

    // Print matrix
    for (int i = 0; i < mat_A.row_pntr.size() - 1; i++) {
        for (int j = mat_A.row_pntr[i]; j < mat_A.row_pntr[i + 1]; j++) {
            cout << "(" << i << ", " << mat_A.col_indx[j] << "): " << mat_A.d_data[j] << " ";
        }
        cout << endl;
    }

     // Compute and print sequential result
    auto startTimeSeq = chrono::high_resolution_clock::now();
    cmt_seq();
    auto endTimeSeq = chrono::high_resolution_clock::now();
    cout << "Sequential Result C1:" << endl;
    for (double val : res_C) {
        cout << val << " ";
    }
    cout << endl;


    // Get user input for number of threads
    cout << "Enter the number of threads: ";
    cin >> nm_thd;

    // Initialize pthreads
    pthread_t threads[nm_thd];
    int threadIds[nm_thd];

    // Compute parallel result
    for (int i = 0; i < nm_thd; i++) {
        threadIds[i] = i;
        pthread_create(&threads[i], NULL, cmt_prll, &threadIds[i]);
    }

    // Wait for threads to finish
    for (int i = 0; i < nm_thd; i++) {
        pthread_join(threads[i], NULL);
    }

    // Print parallel result
    cout << "Parallel Result C2:" << endl;
    for (double val : res_C) {
        cout << val << " ";
    }
    cout << endl;



    // Compute parallel result for varying number of threads
for (int nm_thd = 1; nm_thd <= 32; nm_thd *= 2) {
    cout << "Number of threads: " << nm_thd << endl;

    auto startTimePar = chrono::high_resolution_clock::now();

    // Initialize pthreads and compute parallel result
    pthread_t threads[nm_thd];
    int threadIds[nm_thd];

    for (int i = 0; i < nm_thd; i++) {
        threadIds[i] = i;
        pthread_create(&threads[i], NULL, cmt_prll, &threadIds[i]);
    }

    // Wait for threads to finish
    for (int i = 0; i < nm_thd; i++) {
        pthread_join(threads[i], NULL);
    }
    auto endTimePar = chrono::high_resolution_clock::now();

    
    double l2NormDiff = 0.0;
    for (int i = 0; i < res_C.size(); i++) {
        l2NormDiff += pow(res_C[i] - res_C[i], 2);
    }
    l2NormDiff = sqrt(l2NormDiff);

    cout << "L2 Norm Difference: " << l2NormDiff << endl;

   
    chrono::duration<double> elapsedTimeSeq = endTimeSeq - startTimeSeq;
    chrono::duration<double> elapsedTimePar = endTimePar - startTimePar;

    cout << "Sequential Time: " << elapsedTimeSeq.count() << " seconds" << endl;
    cout << "Parallel Time: " << elapsedTimePar.count() << " seconds" << endl;

    cout << "---------------------" << endl;
}




    return 0;
}
