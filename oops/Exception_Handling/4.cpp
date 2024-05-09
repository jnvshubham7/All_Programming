
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw "An unknown error occurred.";
    } catch(...) {
        cout << "Unknown exception caught." << endl;
    }
    return 0;
}
