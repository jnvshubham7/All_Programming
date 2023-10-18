#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cuda_runtime.h>



__global__ void matrixMultiplication(int* A, int* B, int* C, int n) {
    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;

    if (row < n && col < n) {
        int sum = 0;
        for (int k = 0; k < n; ++k) {
            sum += A[row * n + k] * B[k * n + col];
        }
        C[row * n + col] = sum;
    }
}




int main() {
    int n;
    std::cin >> n;

    int* h_A = new int[n * n];
    int* h_B = new int[n * n];
    int* h_C = new int[n * n];

    // Initialize matrices h_A and h_B with random values
    srand(time(NULL));
    for (int i = 0; i < n * n; ++i) {
        h_A[i] = rand() % 1000 + 1;
        h_B[i] = rand() % 1000 + 1;
    }

    int* d_A;
    int* d_B;
    int* d_C;

    // Allocate memory on the GPU
    cudaMalloc((void**)&d_A, sizeof(int) * n * n);
    cudaMalloc((void**)&d_B, sizeof(int) * n * n);
    cudaMalloc((void**)&d_C, sizeof(int) * n * n);

    // Copy data from host to device
    cudaMemcpy(d_A, h_A, sizeof(int) * n * n, cudaMemcpyHostToDevice);
    cudaMemcpy(d_B, h_B, sizeof(int) * n * n, cudaMemcpyHostToDevice);

    // Define thread and block dimensions
    dim3 threadsPerBlock(16, 16);
    dim3 numBlocks((n + 15) / 16, (n + 15) / 16);

    // Launch the matrix multiplication kernel
    matrixMultiplication<<<numBlocks, threadsPerBlock>>>(d_A, d_B, d_C, n);

    // Copy the result from device to host
    cudaMemcpy(h_C, d_C, sizeof(int) * n * n, cudaMemcpyDeviceToHost);

    // Print the result matrix h_C if needed

    // Free GPU memory
    cudaFree(d_A);
    cudaFree(d_B);
    cudaFree(d_C);

    // Free CPU memory
    delete[] h_A;
    delete[] h_B;
    delete[] h_C;

    return 0;
}


