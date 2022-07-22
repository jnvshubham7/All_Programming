// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

/* Utility function to print an array */
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

  cout << endl;
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

  rvereseArray(arr, 0, n - 1);

  cout << "Reversed array is" << endl;

  printArray(arr, n);

  return 0;
}
