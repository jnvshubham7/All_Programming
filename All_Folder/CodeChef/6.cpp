#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  fileio;

  int t;
  cin >> t;
  while (t--) {
    int a, b, p, q;
    cin >> a >> b >> p >> q;

    

if(a==p && b==q)
{
    cout << "0" << endl;
}

 else if ((a + b) % 2 == 0 && (p + q) % 2 == 0) {
    
        
          cout << "2" << endl;

        

    }

 else if((a + b) % 2 == 0)  {

      cout << "1" << endl;
    }

    else if(  (p + q) % 2 == 0) {
      cout << "1" << endl;
    }

    else {
      cout << "1" << endl;
    }



  }
  return 0;
}

 

