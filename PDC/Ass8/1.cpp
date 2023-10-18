// Name: Shubham Kumar Bhokta
// Roll No: IIT2020007




// Experimental Set-up:

// Computer: I conducted the experiments using a laptop equipped with VS Code for all coding tasks.
// Compiler: I utilized a C++ compiler for compiling the code.
// Compilation flags: No special compilation flags were used.




// Summary of Results:




// Algorithm Used:
//i have used intel tbb  and thead




// Remarks/Observations:





#include <bits/stdc++.h>
#include <tbb/tbb.h>

using namespace std;
using namespace tbb;

int func(int n) {
    if (n <= 1)
        return n;

    task_group tg;

    int res1, res2;

    tg.run([&] { res1 = func(n - 1); });
    tg.run([&] { res2 = func(n - 2); });

    tg.wait();

    return res1 + res2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = func(n);

        cout<<ans<<" "<<endl;
    }

    return 0;
}
