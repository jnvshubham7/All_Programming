#include <iostream>
#include <vector>
#include <omp.h>


    void func(vector<int>& v, int thread) {
        int n = input.size();
        vector<int> pre_sum(n);

        
        #pragma omp parallel for num_threads(thread)
        for (int i = 0; i < n; ++i) {
            pre_sum[i] = v[i];
        }

        
        for (int stride = 1; stride < n; stride *= 2) {
            #pragma omp parallel for num_threads(thread)
            for (int i = stride; i < n; ++i) {
                prefixSum[i] += prefixSum[i - stride];
            }
        }

       
        #pragma omp parallel for num_threads(thread)
        for (int i = 0; i < n; ++i) {
            input[i] = prefixSum[i];
        }
    }


int main() {
    int N = 10; 
    int M = 4;  

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        v[i] = i + 1;
    }

   
    func(v, M);

    
    for (int i = 0; i < N; ++i) {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}
