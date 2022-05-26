#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string s) {
  string str =s;
  if(s.size()==1)
  {
      return true;
  }
  reverse(s.begin(), s.end());
  if(s==str)
  {
      true;
  }
  else
  {
      false;
  }

}

int main() {

  ll t;
  cin >> t;
  while (t--) {

    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll cnt = 0;
    
    for (int i = 0; i < n; i++) {
      string s1 = s;
      s.erase(i, 1);
      if (isPalindrome(s)) {
        cnt++;
      }
      s = s1;
    }

    cout << cnt << endl;
  }

  return 0;
}