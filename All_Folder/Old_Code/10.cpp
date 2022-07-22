// A C++ program to put all negative
// numbers before positive numbers


#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      if (i != j)
        swap(arr[i], arr[j]);
      j++;
    }
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

int main() {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  rearrange(arr, n);

  printArray(arr, n);
  return 0;
}
