
#include <iostream>
using namespace std;

int main() {
    try {
        throw runtime_error("An error occurred.");
    } catch(const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
