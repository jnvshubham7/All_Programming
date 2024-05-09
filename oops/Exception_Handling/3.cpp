#include <iostream>
#include <stdexcept>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred.";
    }
};

int main() {
    try {
        throw MyException();
    } catch(const MyException& e) {
        cout << "Custom exception caught: " << e.what() << endl;
    }
    return 0;
}
