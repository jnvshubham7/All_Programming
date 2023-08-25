

// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// Arr_B[10] = 497
// Arr_B[11] = 502
// Arr_B[12] = 547
// Arr_B[13] = 628
// Arr_B[14] = 655
// Arr_B[15] = 716
// Arr_B[16] = 807
// Arr_B[17] = 902
// Arr_B[18] = 944
// Arr_B[19] = 971

// .
// .
// .


// until 

// Arr_B[1016] = 49027
// Arr_B[1017] = 49048
// Arr_B[1018] = 49110
// Arr_B[1019] = 49131
// Arr_B[1020] = 49195
// Arr_B[1021] = 49204
// Arr_B[1022] = 49219
// Arr_B[1023] = 49221




// Algorithm Used:

//Prefix Sum


// Remarks/Observations:

// In this code, an array of random numbers is generated. 
// The prefix sum of the array is then computed using the sreil_prfx_sm function. 
// Finally, the resultant prefix sum array is printed.








#include<bits/stdc++.h>
using namespace std;






void sreil_prfx_sm(int Arr_A[], int Arr_B[], int sz) {
    Arr_B[0] = 0;
    for (int i = 1; i < sz; ++i) {
        Arr_B[i] = Arr_B[i - 1] + Arr_A[i - 1];
    }
}

int main() {
    const int sz = 1024;
    int Arr_A[sz];  
    int Arr_B[sz];  

    for (int i = 0; i < sz; ++i) {
        Arr_A[i] = rand() % 100; 
    }

    sreil_prfx_sm(Arr_A, Arr_B, sz);

 
    for (int i = 0; i < sz; ++i) {
        std::cout << "Arr_B[" << i << "] = " << Arr_B[i] << std::endl;
    }

    return 0;
}
