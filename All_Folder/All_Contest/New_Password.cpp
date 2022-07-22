#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)

  {

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
      if ((s[i] >= 'A' && s[i] <= 'Z')) {
        break;
        //  ans+=s[i];
      }
      if (i == n - 1) {
        // add any one char to the string
        // A add to ans

        s += 'A';
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      if ((s[i] >= 'a' && s[i] <= 'z')) {
        break;
        //  ans+=s[i];
      }
      if (i == n - 1) {
        // add any one char to the string
        // a add to ans

        s += 'a';
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      if ((s[i] >= '0' && s[i] <= '9')) {
        break;
        //  ans+=s[i];
      }
      if (i == n - 1) {
        // add any one char to the string
        // 0 add to ans

        s += '0';
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      if ((s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')) {
        break;
        //  ans+=s[i];
      }
      if (i == n - 1) {
        // add any one char to the string
        //# add to ans

        s += '#';
        break;
      }
    }

    if (s.length() >= 7) {
      cout << "Case #" << i + 1 << " " << s << endl;
    } else {

      for (int i = 0; i < (7 - s.size()); i++) {

        s += 'A';
      }

      cout << "Case #" << i + 1 << " " << s << endl;
    }

    //     cout<<s<<endl;
  }

  return 0;
}