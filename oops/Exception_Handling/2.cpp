#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        // Divide by zero
        int a = 10, b = 0;
        if (b == 0) {
            throw runtime_error("Division by zero.");
        }

        // Accessing out-of-range element
        int arr[5] = {1, 2, 3, 4, 5};
        cout << "Array element: " << arr[10] << endl;
    } catch(const runtime_error& e) {
        cout << "Runtime error: " << e.what() << endl;
    } catch(const out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }
    return 0;
}
