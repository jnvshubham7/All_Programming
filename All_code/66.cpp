#include <bits/stdc++.h> 
using namespace std;

int main() {
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
	
    
  int N;
  cin >> N;
  
  int count = 0;
  int savings = 0; 
  while(savings < N){
      count++;
      savings += count;
  }
 
  cout << count << endl;
	return 0;
}
