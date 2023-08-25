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
    vector<double> data;
    vector<int> col_indices;
    vector<int> row_pointers;
};

// Global variables
CSRMatrix matrixA;
vector<double> vectorB;
vector<double> resultC;
int numThreads;

// Function to read sparse matrix in COO format and convert to CSR format
void readAndConvertToCSR(string filename) {
    ifstream inputFile(filename);
    int numRows, numCols, numNonZeroes;
    inputFile >> numRows >> numCols >> numNonZeroes;

    matrixA.row_pointers.push_back(0);

    for (int i = 0; i < numNonZeroes; i++) {
        int row, col;
        double value;
        inputFile >> row >> col >> value;
        matrixA.data.push_back(value);
        matrixA.col_indices.push_back(col);
        
        while (row > matrixA.row_pointers.size() - 1) {
            matrixA.row_pointers.push_back(i);
        }
    }

    while (matrixA.row_pointers.size() < numRows + 1) {
        matrixA.row_pointers.push_back(numNonZeroes);
    }
}

// Function to read dense vector
void readVector(string filename) {
    ifstream inputFile(filename);
    double value;

    while (inputFile >> value) {
        vectorB.push_back(value);
    }
}

// Function to compute SpMM sequentially
void computeSequential() {
    resultC.resize(matrixA.row_pointers.size() - 1, 0.0);

    for (int i = 0; i < matrixA.row_pointers.size() - 1; i++) {
        for (int j = matrixA.row_pointers[i]; j < matrixA.row_pointers[i + 1]; j++) {
            resultC[i] += matrixA.data[j] * vectorB[matrixA.col_indices[j]];
        }
    }
}

// Function for each thread to compute a portion of SpMM
void* computeParallel(void* arg) {
    int threadId = *(int*)arg;
    int numElements = matrixA.row_pointers.size() - 1;
    int elementsPerThread = numElements / numThreads;
    int start = threadId * elementsPerThread;
    int end = (threadId == numThreads - 1) ? numElements : (start + elementsPerThread);

    for (int i = start; i < end; i++) {
        for (int j = matrixA.row_pointers[i]; j < matrixA.row_pointers[i + 1]; j++) {
            resultC[i] += matrixA.data[j] * vectorB[matrixA.col_indices[j]];
        }
    }

    pthread_exit(NULL);
}

int main() {
    string matrixFilename = "input1.mtx"; // Replace with your input file name
    string vectorFilename = "vector1.txt"; // Replace with your input file name

    // Read input files and matrix format conversion
    readAndConvertToCSR(matrixFilename);
    readVector(vectorFilename);

    // Print matrix details
    cout << "Matrix A:" << endl;
    cout << "#Rows: " << matrixA.row_pointers.size() - 1 << ", #Cols: " << matrixA.col_indices.size() << ", #Non-Zeroes: " << matrixA.data.size() << endl;

    // Print matrix
    for (int i = 0; i < matrixA.row_pointers.size() - 1; i++) {
        for (int j = matrixA.row_pointers[i]; j < matrixA.row_pointers[i + 1]; j++) {
            cout << "(" << i << ", " << matrixA.col_indices[j] << "): " << matrixA.data[j] << " ";
        }
        cout << endl;
    }

     // Compute and print sequential result
    auto startTimeSeq = chrono::high_resolution_clock::now();
    computeSequential();
    auto endTimeSeq = chrono::high_resolution_clock::now();
    cout << "Sequential Result C1:" << endl;
    for (double val : resultC) {
        cout << val << " ";
    }
    cout << endl;


    // Get user input for number of threads
    cout << "Enter the number of threads: ";
    cin >> numThreads;

    // Initialize pthreads
    pthread_t threads[numThreads];
    int threadIds[numThreads];

    // Compute parallel result
    for (int i = 0; i < numThreads; i++) {
        threadIds[i] = i;
        pthread_create(&threads[i], NULL, computeParallel, &threadIds[i]);
    }

    // Wait for threads to finish
    for (int i = 0; i < numThreads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Print parallel result
    cout << "Parallel Result C2:" << endl;
    for (double val : resultC) {
        cout << val << " ";
    }
    cout << endl;



    // Compute parallel result for varying number of threads
for (int numThreads = 1; numThreads <= 32; numThreads *= 2) {
    cout << "Number of threads: " << numThreads << endl;

    auto startTimePar = chrono::high_resolution_clock::now();

    // Initialize pthreads and compute parallel result
    pthread_t threads[numThreads];
    int threadIds[numThreads];

    for (int i = 0; i < numThreads; i++) {
        threadIds[i] = i;
        pthread_create(&threads[i], NULL, computeParallel, &threadIds[i]);
    }

    // Wait for threads to finish
    for (int i = 0; i < numThreads; i++) {
        pthread_join(threads[i], NULL);
    }
    auto endTimePar = chrono::high_resolution_clock::now();

    // Compare results and report L2 norm difference
    double l2NormDiff = 0.0;
    for (int i = 0; i < resultC.size(); i++) {
        l2NormDiff += pow(resultC[i] - resultC[i], 2);
    }
    l2NormDiff = sqrt(l2NormDiff);

    cout << "L2 Norm Difference: " << l2NormDiff << endl;

    // Measure and report execution time
    chrono::duration<double> elapsedTimeSeq = endTimeSeq - startTimeSeq;
    chrono::duration<double> elapsedTimePar = endTimePar - startTimePar;

    cout << "Sequential Time: " << elapsedTimeSeq.count() << " seconds" << endl;
    cout << "Parallel Time: " << elapsedTimePar.count() << " seconds" << endl;

    cout << "---------------------" << endl;
}

    return 0;
}
