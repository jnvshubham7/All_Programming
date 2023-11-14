// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:


// unsorted_arr 5 4 5 6 7 1 
// sorted_arr 1 4 5 5 6 7 






// Algorithm Used:
//used odd even sort algorithm to sort the array in parallel
//using mpi


// Remarks/Observations:








#include <bits/stdc++.h>
#include <mpi.h>

using namespace std;

void func_mpi(vector<int>& v, int v_sz) {
    int p, rank;
    MPI_Comm_size(MPI_COMM_WORLD, &p);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int n = v_sz;

    vector<int> recv_buf(v_sz);

    bool sort_flag = false;
    
    for (int phase = 0; phase < n; phase++) {
        if (phase % 2 == 0) {

            if (rank % 2 == 0) {

                if (rank < p - 1) {

                    MPI_Send(&v[n - 1], 1, MPI_INT, rank + 1, 0, MPI_COMM_WORLD);
                    MPI_Recv(&v[n], 1, MPI_INT, rank + 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

                }
            } else {

                if (rank > 0) {

                    MPI_Recv(&v[n], 1, MPI_INT, rank - 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                    MPI_Send(&v[0], 1, MPI_INT, rank - 1, 0, MPI_COMM_WORLD);
                }

            }
        } else {

            if (rank % 2 == 1) {

                if (rank < p - 1) {

                    MPI_Send(&v[n - 1], 1, MPI_INT, rank + 1, 0, MPI_COMM_WORLD);
                    MPI_Recv(&v[n], 1, MPI_INT, rank + 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                }

            } else {

                if (rank > 0) {

                    MPI_Recv(&v[n], 1, MPI_INT, rank - 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                    MPI_Send(&v[0], 1, MPI_INT, rank - 1, 0, MPI_COMM_WORLD);
                }

            }
        }

        if (rank % 2 == 0) {

            for (int i = 1; i < n - 1; i += 2) {

                if (v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    sort_flag = true;
                }
            }
        } else {
            for (int i = 0; i < n - 1; i += 2) {


                if (v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    sort_flag = true;
                }
            }
        }
    }
}

int main(int argc, char* argv[]) {

    MPI_Init(&argc, &argv);


    int p, rank;
    MPI_Comm_size(MPI_COMM_WORLD, &p);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    vector<int> v = {5, 4, 5, 6, 7, 1};

    int v_sz = v.size();

    int v2_sz;
    MPI_Allreduce(&v_sz, &v2_sz, 1, MPI_INT, MPI_SUM, MPI_COMM_WORLD);

    if (v2_sz % p != 0) {
        if (rank == 0) {
            cout << "no. of process must evenly divide the arr_size" << endl;
        }
        MPI_Finalize();
        return 1;
    }

  
    vector<int> v2(v2_sz);
    MPI_Allgather(v.data(), v_sz, MPI_INT, v2.data(), v_sz, MPI_INT, MPI_COMM_WORLD);

    func_mpi(v, v_sz);

    
    MPI_Gather(v.data(), v_sz, MPI_INT, v2.data(), v_sz, MPI_INT, 0, MPI_COMM_WORLD);

    if (rank == 0) {

        cout << "unsorted_arr: ";

        for (int i = 0; i < v2_sz; i++) {

            cout << v2[i] << " ";

        }

        cout << endl;


    }


    if (rank == 0) {
        cout << "sorted_arr: ";
        for (int i = 0; i < v2_sz; i++) {
            cout << v2[i] << " ";
        }


        cout << endl;
    }



    MPI_Finalize();
    return 0;
}
