#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void sort(int arr[], int n) {

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
      switch (arr[mid]) {
      case 0:
        swap(arr[low], arr[mid]);
        low++;
        mid++;
        break;

      case 1:
        mid++;
        break;

      case 2:
        swap(arr[mid], arr[high]);
        high--;
        break;
      }
    }
  }
};

int main() {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    Solution ob;
    ob.sort(a, n);

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    cout << endl;
  }
  return 0;
}

