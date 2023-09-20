#include <bits/stdc++.h>

#include <stack>

using namespace std;

class Solution {
public:
    vector<int> func(vector<int>& A) {
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

        return B;
    }
};

int main() {
    vector<int> A = {5, 3, 2, 6, 1, 4};
    
    // vector<int> B = func(A);

    

    
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

    
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }

   cout << endl;

    return 0;
}
