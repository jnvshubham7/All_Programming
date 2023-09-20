


// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// Shortest distances from node 0 to all other nodes:
// Node 0: 0
// Node 1: 2
// Node 2: 4
// Node 3: 5
// Node 4: 10
// Node 5: 7




// Algorithm Used:



// Remarks/Observations:








#include <iostream>
#include <vector>
#include <limits>
#include <pthread.h>

using namespace std;

const int MAX_THREADS = 4; 

class Solution {
public:
    vector<int> dijkst(vector<vector<int>>& grph, int src) {
        int N = grph.size();
        vector<int> distnc(N, numeric_limits<int>::max());
        vector<bool> vist(N, false);

        distnc[src] = 0;

        for (int i = 0; i < N - 1; ++i) {
            int mndist = numeric_limits<int>::max();
            int mnindx = -1;

            
            #pragma omp parallel for num_threads(MAX_THREADS)
            for (int v = 0; v < N; ++v) {
                if (!vist[v] && distnc[v] < mndist) {
                    mndist = distnc[v];
                    mnindx = v;
                }
            }

            vist[mnindx] = true;

           
            #pragma omp parallel for num_threads(MAX_THREADS)
            for (int v = 0; v < N; ++v) {
                if (!vist[v] && grph[mnindx][v] && distnc[mnindx] != numeric_limits<int>::max() &&
                    distnc[mnindx] + grph[mnindx][v] < distnc[v]) {
                    distnc[v] = distnc[mnindx] + grph[mnindx][v];
                }
            }
        }

        return distnc;
    }
};

int main() {
    int N = 6;
    vector<vector<int>> grph = {
        {0, 2, 4, 0, 0, 0},
        {2, 0, 3, 5, 0, 0},
        {4, 3, 0, 1, 7, 0},
        {0, 5, 1, 0, 0, 2},
        {0, 0, 7, 0, 0, 3},
        {0, 0, 0, 2, 3, 0}
    };

    int src = 0;

    Solution solution;
    vector<int> short_dist = solution.dijkst(grph, src);

    cout << "Shortest distances from node " << src << " to all other nodes:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Node " << i << ": " << short_dist[i] << "\n";
    }

    return 0;
}
