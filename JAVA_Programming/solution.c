// Name : SUMIT RAWAT
// ROLL no: IIT2020102
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct CSRMatrix {
    double* data;
    int* columnIndices;
    int* rowPointers;
    int rows;
    int cols;
    int nnz;
};

struct DenseVector {
    double* data;
    int size;
};

struct ThreadArgs {
    struct CSRMatrix* matrix;
    struct DenseVector* vector;
    struct DenseVector* result;
    int start;
    int end;
};

void* parallelMatrixVectorMultiply(void* args) {
    struct ThreadArgs* threadArgs = (struct ThreadArgs*)args;
    struct CSRMatrix* matrix = threadArgs->matrix;
    struct DenseVector* vector = threadArgs->vector;
    struct DenseVector* result = threadArgs->result;

    for (int i = threadArgs->start; i < threadArgs->end; ++i) {
        int start = matrix->rowPointers[i];
        int end = matrix->rowPointers[i + 1];
        for (int j = start; j < end; ++j) {
            int col = matrix->columnIndices[j];
            double value = matrix->data[j];
            result->data[i] += value * vector->data[col];
        }
    }

    return NULL;
}

int main() {
    char* sparseMatrixFile = "input1.mtx";
    char* denseVectorFile = "vector1.txt";
    int numThreads;

    printf("Enter the number of threads: ");
    scanf("%d", &numThreads);

    struct CSRMatrix matrix;
    // Read sparse matrix and initialize matrix data, columnIndices, rowPointers, rows, cols, nnz

    struct DenseVector vector;
    // Read dense vector and initialize vector data, size

    // Parallel SpMM
    struct DenseVector parallelResult;
    parallelResult.size = matrix.rows;
    parallelResult.data = (double*)malloc(sizeof(double) * matrix.rows);
    for (int i = 0; i < matrix.rows; ++i) {
        parallelResult.data[i] = 0.0;
    }

    pthread_t threads[numThreads];
    struct ThreadArgs threadArgs[numThreads];

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

    printf("Parallel Result:\n");
    for (int i = 0; i < parallelResult.size; ++i) {
        printf("%lf ", parallelResult.data[i]);
    }
    printf("\n");

    free(parallelResult.data);

    return 0;
}
