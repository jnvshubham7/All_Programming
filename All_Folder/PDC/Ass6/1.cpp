// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:
// 1 3 7 13 23 37 57 83 119 165 







// Algorithm Used:
//used prefix sum algorithm to find the sum of the array elements in parallel







// Remarks/Observations:



#include <bits/stdc++.h>
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

#include <omp.h>

using namespace std;


    void func(vector<int>& v, int thread) {
        int n = v.size();
        vector<int> pre_sum(n);

        
        #pragma omp parallel for num_threads(thread)
        for (int i = 0; i < n; ++i) {
            pre_sum[i] = v[i];
        }

        
        for (int j = 1; j < n; j *= 2) {
            #pragma omp parallel for num_threads(thread)
            for (int i = j; i < n; ++i) {
                pre_sum[i] += pre_sum[i - j];
            }
        }

       
        #pragma omp parallel for num_threads(thread)
        for (int i = 0; i < n; ++i) {
            v[i] = pre_sum[i];
        }
    }


int main() {
    int N = 10; 
    int M = 4;  

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        v[i] = i + 1;
    }

   
    func(v, M);

    
    for (int i = 0; i < N; ++i) {
        cout << v[i] << " ";
    }

int sum=0;
for(int i=0;i<N;i++)
{
    sum+=v[i];
}

cout<<endl;


    return 0;
}





































