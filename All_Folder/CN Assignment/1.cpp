#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int l, int h) {
  int pivot = v[h];
  int i = l - 1;
  for (int j = l; j < h; j++) {
    if (v[j] < pivot) {
      i++;
      swap(v[i], v[j]);
    }
  }
  i++;
  swap(v[h], v[i]);
  return i;
}
void qwicksort(vector<int> &v, int l, int h) {
  if (l < h) {
    int x = partition(v, l, h);
    qwicksort(v, x + 1, h);
    qwicksort(v, l, x - 1);
  }
}
int main() {
  int n;
  cout << "Enter number of data in file" << endl;
  cin >> n;
  vector<int> v(n);
  string s;
  ifstream in("CNQ2.txt");
  for (int i = 0; i < n; i++) {
    in >> s;
    int t = s.size();
    int sum = 0;
    int j = 0;
    while (t--) {
      sum += ((s[j] - '0') * pow(10, t));
      j++;
    }
    v[i] = sum;
  }
  cout << "Array in file before sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  qwicksort(v, 0, n - 1);
  cout << "Array in file after sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}
