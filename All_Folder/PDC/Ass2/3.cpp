#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <pthread.h>

using namespace std;

// Structure to represent sparse matrix in CSR format
struct CSRMatrix {
    vector<double> data;
    vector<int> column_indices;
    vector<int> row_pointers;
    int rows;
    int cols;
    int nnz;
};

// Structure to represent dense vector
struct DenseVector {
    vector<double> data;
    int size;
};

// Structure to pass thread arguments
struct ThreadArgs {
    CSRMatrix* matrix;
    DenseVector* vector;
    DenseVector* result;
    int start;
    int end;
};

// Function to read COO formatted sparse matrix and convert to CSR format
CSRMatrix readSparseMatrix(const string& filename) {
    CSRMatrix matrix;
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    int numRows, numCols, nnz;
    file >> numRows >> numCols >> nnz;
    matrix.rows = numRows;
    matrix.cols = numCols;
    matrix.nnz = nnz;

    matrix.row_pointers.push_back(0);
    for (int i = 0; i < nnz; ++i) {
        int row, col;
        double value;
        file >> row >> col >> value;
        matrix.data.push_back(value);
        matrix.column_indices.push_back(col);
        if (row != matrix.row_pointers.back()) {
            matrix.row_pointers.push_back(i + 1);
        }
    }

    return matrix;
}

// Function to read dense vector
DenseVector readDenseVector(const string& filename) {
    DenseVector vector;
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    int size;
    file >> size;
    vector.size = size;

    for (int i = 0; i < size; ++i) {
        double value;
        file >> value;
        vector.data.push_back(value);
    }

    return vector;
}

// Function to perform sequential sparse matrix multiplication
DenseVector sequentialMatrixVectorMultiply(const CSRMatrix& matrix, const DenseVector& vector) {
    DenseVector result;
    result.size = matrix.rows;
    result.data.resize(matrix.rows, 0.0);

    for (int i = 0; i < matrix.rows; ++i) {
        int start = matrix.row_pointers[i];
        int end = matrix.row_pointers[i + 1];
        for (int j = start; j < end; ++j) {
            int col = matrix.column_indices[j];
            double value = matrix.data[j];
            result.data[i] += value * vector.data[col];
        }
    }

    return result;
}

// Function to perform parallel sparse matrix multiplication using pthreads
void* parallelMatrixVectorMultiply(void* args) {
    ThreadArgs* threadArgs = static_cast<ThreadArgs*>(args);
    CSRMatrix* matrix = threadArgs->matrix;
    DenseVector* vector = threadArgs->vector;
    DenseVector* result = threadArgs->result;

    for (int i = threadArgs->start; i < threadArgs->end; ++i) {
        int start = matrix->row_pointers[i];
        int end = matrix->row_pointers[i + 1];
        for (int j = start; j < end; ++j) {
            int col = matrix->column_indices[j];
            double value = matrix->data[j];
            result->data[i] += value * vector->data[col];
        }
    }

    pthread_exit(NULL);
}

int main() {
    string sparseMatrixFile = "input1.mtx";
    string denseVectorFile = "vector1.txt";
    int numThreads;

    cout << "Enter the number of threads: ";
    cin >> numThreads;

    CSRMatrix matrix = readSparseMatrix(sparseMatrixFile);
    DenseVector vector = readDenseVector(denseVectorFile);

    // Sequential SpMM
    DenseVector seqResult = sequentialMatrixVectorMultiply(matrix, vector);
    cout << "Sequential Result:" << endl;
    for (int i = 0; i < seqResult.size; ++i) {
        cout << seqResult.data[i] << " ";
    }
    cout << endl;

    // Parallel SpMM
    DenseVector parallelResult;
    parallelResult.size = matrix.rows;
    parallelResult.data.resize(matrix.rows, 0.0);

    pthread_t threads[numThreads];
    ThreadArgs threadArgs[numThreads];

    int chunkSize = matrix.rows / numThreads;
    for (int i = 0; i < numThreads; ++i) {
        threadArgs[i].matrix = &matrix;
        threadArgs[i].vector = &vector;
        threadArgs[i].result = &parallelResult;
        threadArgs[i].start = i * chunkSize;
        threadArgs[i].end = (i == numThreads - 1) ? matrix.rows : (i + 1) * chunkSize;
        pthread_create(&threads[i], NULL, parallelMatrixVectorMultiply, &threadArgs[i]);
    }

    for (int i = 0; i < numThreads; ++i) {
        pthread_join(threads[i], NULL);
    }

    cout << "Parallel Result:" << endl;
    for (int i = 0; i < parallelResult.size; ++i) {
        cout << parallelResult.data[i] << " ";
    }
    cout << endl;

    return 0;
}
