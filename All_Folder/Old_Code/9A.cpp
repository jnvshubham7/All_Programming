
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    void sort012(int a[], int n) {

  for (int step = 0; step < n - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < n; i++) {
      if (a[i] < a[min_idx])
        min_idx = i;
    }
    swap(a[min_idx],a[step]);
  }
    }
    

    
};

// { Driver Code Starts.
int main() {

     freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends