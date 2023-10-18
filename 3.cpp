



// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:

// 4
// 42 468 335 501
// 170 725 479 359
// 963 465 706 146
// 282 828 962 492

// 996 943 828 437
// 392 605 903 154
// 293 383 422 717
// 719 896 448 727

// 683662 899947 823198 694848
// 851988 1104056 1158405 790376
// 1453260 1590648 1580599 1104785
// 1241062 1576144 1607560 1298184



// Algorithm Used:




// Remarks/Observations:



#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#include <cuda_runtime.h>

using namespace std; 

#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)

__global__ void mat_func(int *mat1, int *mat2, int *res, int n) {
    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;
    if (row<n &&col < n) {
        int x = 0;
        for (int k = 0; k < n; ++k) {
            x += mat1[row*n+k] * mat2[k * n + col];
        }
        res[row*n+col] = x;
    }
}

int main() {
    int n;
    cin >> n;

    int *mat1, *mat2, *res;
    int sz = n*n*sizeof(int);

   
    cudaMalloc((void**)&mat1, sz);
    cudaMalloc((void**)&mat2, sz);
    cudaMalloc((void**)&res, sz);

  
    srand(time(NULL));
    vector<int> host_mat1(n * n);
    vector<int> host_mat2(n * n);

    for (int i = 0; i <n*n; i++) {
        host_mat1[i] = rand()%1000+1;
        host_mat2[i] = rand()%1000+1;
    }

    cudaMemcpy(mat1, host_mat1.data(), sz, cudaMemcpyHostToDevice);
    cudaMemcpy(mat2, host_mat2.data(), sz, cudaMemcpyHostToDevice);

  
    dim3 blockSize(16, 16);
    dim3 gridSize((n + blockSize.x - 1) / blockSize.x, (n + blockSize.y - 1) / blockSize.y);

   
    mat_func<<<gridSize, blockSize>>>(mat1, mat2, res, n);

   
    vector<int> host_res(n * n);
    cudaMemcpy(host_res.data(), res, sz, cudaMemcpyDeviceToHost);


    // print matrix

    // fr(i,n){
    //     fr(j,n){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    // fr(i,n){
    //     fr(j,n){
    //         cout<<mat2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;




    // multiply matrix 

    // int res[n][n];


    // fr(i,n){
    //     fr(j,n){
    //         res[i][j]=0;
    //         fr(k,n){
    //             res[i][j]+=mat[i][k]*mat2[k][j];
    //         }
    //     }
    // }



    // print matrix

    // fr(i,n){
    //     fr(j,n){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



  
    fr(i,n) {
       fr(j,n) {
            cout << host_res[i*n+j]<<" ";
        }
        cout << endl;
    }


    cudaFree(mat1);
    cudaFree(mat2);
    cudaFree(res);

    return 0;
}
