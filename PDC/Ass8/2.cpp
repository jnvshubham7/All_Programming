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
#include <tbb/concurrent_queue.h>
#include <thread>

using namespace std;
using namespace tbb;

 int bf_sz = 5;

concurrent_bounded_queue<int> qq;

void prod() {



    for (int i = 1;i<=10; ++i) {

        qq.push(i);

        cout << "prod_output:" <<i<< endl;

        this_thread::sleep_for(chrono::milliseconds(50));


    }
}

void cons() {
    for (int i = 0;i<10;++i) {


        int val;
        qq.pop(val);

        cout<<"cons_output:" <<val<< endl;

        this_thread::sleep_for(chrono::milliseconds(100));


    }
}

int main() {
    thread producerThread(prod);

    thread consumerThread(cons);

    producerThread.join();

    consumerThread.join();

    return 0;
}
