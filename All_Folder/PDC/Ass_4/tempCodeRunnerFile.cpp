


// iv) Using parallel + for + reduction directives:
#include <stdio.h>
#include <omp.h>

int main() {
    int N = 1000;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = i + 1;
    }

    int sum = 0;

    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < N; ++i) {
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}








