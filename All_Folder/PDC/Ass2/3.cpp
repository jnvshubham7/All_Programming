#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <omp.h>
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
struct CSRMatrix mat_A;
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

// Function for each thread to compute a portion of SpMM using OpenMP
void cmt_prll_openmp() {
    int numElements = mat_A.row_pntr.size() - 1;

    #pragma omp parallel for num_threads(nm_thd)
    for (int i = 0; i < numElements; i++) {
        for (int j = mat_A.row_pntr[i]; j < mat_A.row_pntr[i + 1]; j++) {
            #pragma omp atomic
            res_C[i] += mat_A.d_data[j] * vec_B[mat_A.col_indx[j]];
        }
    }
}

int main() {
    string matrixFilename = "inputfile.mtx"; // Replace with your input file name
    string vectorFilename = "vector.txt"; // Replace with your input file name

    // Read input files and matrix format conversion
    read_cnvrt_csr(matrixFilename);
    read_vct(vectorFilename);

    // Print matrix details (skipping for brevity)

    // Compute and print sequential result (skipping for brevity)

    // Get user input for number of threads
    cout << "Enter the number of threads: ";
    cin >> nm_thd;

    // Compute parallel result using OpenMP
    auto startTimeOpenMP = chrono::high_resolution_clock::now();
    cmt_prll_openmp();
    auto endTimeOpenMP = chrono::high_resolution_clock::now();

    // Print parallel result (skipping for brevity)

    // ... Rest of the code for varying thread counts, calculating L2 norm difference, and measuring execution time ...

     double l2NormDiff = 0.0;
    for (int i = 0; i < res_C.size(); i++) {
        l2NormDiff += pow(res_C[i] - res_C[i], 2);
    }
    l2NormDiff = sqrt(l2NormDiff);

    cout << "L2 Norm Difference: " << l2NormDiff << endl;

   

    cout << "---------------------" << endl;

    return 0;

}
