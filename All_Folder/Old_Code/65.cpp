#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n;
  cin >> n;

  int t = 1.08 * n;
  if (t < 206) {
    cout << "Yay!" << endl;
  } else if (t==206){
       cout<<"so-so"<<endl;
  }
  else{
       cout<<":("<<endl;
  }
    return 0;
}
