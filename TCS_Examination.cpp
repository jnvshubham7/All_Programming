#include <bits/stdc++.h>
using namespace std;
#define fileio                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout)

int main() {
  // fileio;

  int t;
  cin >> t;
  while (t--) {
    int a, b, c, a1, b1, c1;
    cin >> a >> b >> c >> a1 >> b1 >> c1;

    int total1=a+b+c;
    int total2=a1+b1+c1;
    if(total1>total2)
    {
      cout<<"DRAGON"<<endl;

    }

    else if(total1<total2)
    {
      cout<<"SLOTH"<<endl;
    }
    else if(a>a1){
      cout<<"DRAGON"<<endl;
    }
    else if(a<a1){
      cout<<"SLOTH"<<endl;
    }
    else if(b>b1){
      cout<<"DRAGON"<<endl;
    }
    else if(b<b1){
      cout<<"SLOTH"<<endl;
    }
   
    else{
      cout<<"TIE"<<endl;
    }



  }

  return 0;
}