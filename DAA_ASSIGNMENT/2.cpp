#include <bits/stdc++.h>
using namespace std;

int iterativeBinarySearch(int array[], int start_index, int end_index,
                          int element) {

  while (start_index <= end_index) {

    int middle = start_index + (end_index - start_index) / 2;

    if (array[middle] == element)
      return middle;

    if (array[middle] < element)
      start_index = middle + 1;

    else
      end_index = middle - 1;
  }
  return -1;
}

int main() {

  int n;
  cout << "Enter the size of array" << endl;
  cin >> n;

  int array[n];
  cout << "Enter the elements of array" << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  int element;

  cout << "Enter the element to be searched" << endl;
  cin >> element;

  int found_index = iterativeBinarySearch(array, 0, n - 1, element);
  if (found_index == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << found_index << endl;
  }
  return 0;
}
