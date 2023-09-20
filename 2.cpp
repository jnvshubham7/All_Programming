
// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:





// Algorithm Used:





// Remarks/Observations:

// The program demonstrates an effective parallel implementation for counting prime numbers within a specified range, leveraging multiple threads to improve performance.
// The execution time is influenced by factors such as the number of threads utilized, the size of 'n,' and the hardware capabilities of the system.
// Results may vary significantly based on the hardware and system load during execution.






#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>


using namespace std;



vector<int> func(vectort<int> &A) {
    int n = A.size();
    vector<int> B(n);
    stack<int> st;
    for (int i = 1; i < n; ++i) {
        while (!st.empty()) {
            int topIndex = st.top();
            if (A[i] >= A[topIndex]) {
                st.pop();
            } else {
                break;
            }
        }
        st.push(i);
    }
    while (!st.empty()) {
        B[st.top()] = 1;
        st.pop();
    }
  
}







int main(){

   vector<int> A = {5, 3, 2, 6, 1, 4};

   

    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

    
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }

   cout << endl;

    return 0;
}