#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cuda_runtime.h>

#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)

__global__ void matrixMul(int *mat1, int *mat2, int *result, int n) {
    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;

    if (row < n && col < n) {
        int val = 0;
        for (int k = 0; k < n; ++k) {
            val += mat1[row * n + k] * mat2[k * n + col];
        }
        result[row * n + col] = val;
    }
}

int main() {
    int n;
    std::cin >> n;

    int *mat1, *mat2, *result;
    int size = n * n * sizeof(int);

    // Allocate memory on the GPU
    cudaMalloc((void**)&mat1, size);
    cudaMalloc((void**)&mat2, size);
    cudaMalloc((void**)&result, size);

    // Generate random values on the CPU
    srand(time(NULL));
    std::vector<int> host_mat1(n * n);
    std::vector<int> host_mat2(n * n);

    for (int i = 0; i < n * n; ++i) {
        host_mat1[i] = rand() % 1000 + 1;
        host_mat2[i] = rand() % 1000 + 1;
    }

    // Copy data from the CPU to the GPU
    cudaMemcpy(mat1, host_mat1.data(), size, cudaMemcpyHostToDevice);
    cudaMemcpy(mat2, host_mat2.data(), size, cudaMemcpyHostToDevice);

    // Define block and grid dimensions
    dim3 blockSize(16, 16);
    dim3 gridSize((n + blockSize.x - 1) / blockSize.x, (n + blockSize.y - 1) / blockSize.y);

    // Launch the CUDA kernel
    matrixMul<<<gridSize, blockSize>>>(mat1, mat2, result, n);

    // Copy the result back to the CPU
    std::vector<int> host_result(n * n);
    cudaMemcpy(host_result.data(), result, size, cudaMemcpyDeviceToHost);

    // Print the result matrix (if needed)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << host_result[i * n + j] << " ";
        }
        std::cout << std::endl;
    }

    // Free GPU memory
    cudaFree(mat1);
    cudaFree(mat2);
    cudaFree(result);

    return 0;
}

















#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cuda_runtime.h>

using namespace std; // Add this line to use the std namespace

#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)

__global__ void matrixMul(int *mat1, int *mat2, int *result, int n) {
    // ... (rest of the code remains the same)
}

int main() {
    // ... (rest of the code remains the same)
    
    // Print the result matrix (if needed)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << host_result[i * n + j] << " "; // Now you can use cout without std:: prefix
        }
        cout << endl;
    }

    // ... (rest of the code remains the same)

    return 0;
}























#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cuda_runtime.h>

using namespace std; // Add this line to use the std namespace

#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)

__global__ void matrixMul(int *mat1, int *mat2, int *result, int n) {
    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;

    if (row < n && col < n) {
        int val = 0;
        for (int k = 0; k < n; ++k) {
            val += mat1[row * n + k] * mat2[k * n + col];
        }
        result[row * n + col] = val;
    }
}

int main() {
    int n;
    cin >> n;

    int *mat1, *mat2, *result;
    int size = n * n * sizeof(int);

    // Allocate memory on the GPU
    cudaMalloc((void**)&mat1, size);
    cudaMalloc((void**)&mat2, size);
    cudaMalloc((void**)&result, size);

    // Generate random values on the CPU
    srand(time(NULL));
    vector<int> host_mat1(n * n);
    vector<int> host_mat2(n * n);

    for (int i = 0; i < n * n; ++i) {
        host_mat1[i] = rand() % 1000 + 1;
        host_mat2[i] = rand() % 1000 + 1;
    }

    // Copy data from the CPU to the GPU
    cudaMemcpy(mat1, host_mat1.data(), size, cudaMemcpyHostToDevice);
    cudaMemcpy(mat2, host_mat2.data(), size, cudaMemcpyHostToDevice);

    // Define block and grid dimensions
    dim3 blockSize(16, 16);
    dim3 gridSize((n + blockSize.x - 1) / blockSize.x, (n + blockSize.y - 1) / blockSize.y);

    // Launch the CUDA kernel
    matrixMul<<<gridSize, blockSize>>>(mat1, mat2, result, n);

    // Copy the result back to the CPU
    vector<int> host_result(n * n);
    cudaMemcpy(host_result.data(), result, size, cudaMemcpyDeviceToHost);

    // Print the result matrix (if needed)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << host_result[i * n + j] << " ";
        }
        cout << endl;
    }

    // Free GPU memory
    cudaFree(mat1);
    cudaFree(mat2);
    cudaFree(result);

    return 0;
}
