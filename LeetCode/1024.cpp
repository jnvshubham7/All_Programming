#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  // fileio;

  string s;
  cin >> s;
  bool flag = false;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    for (int j = n; j > i; j--) {
      if (s[i] == s[j])
        // cout<<abs(j-i);

        // flag = true;
        break;

      // else
      // cout<<-1<<endl;

      // if(s[0] == s[n-1]){
      //     flag = true;
      //     break;
    }
  }

  // if(flag) cout << (n-2);
  // else cout << "-1";

  return 0;
}