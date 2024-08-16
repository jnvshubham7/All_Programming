## USER
give me all possible exceptions handling exmaple in c++ 


## ASSISTANT
Sure, here are some examples of handling exceptions in C++:

1. **Basic Exception Handling:**

```cpp
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
```

2. **Handling Different Types of Exceptions:**

```cpp
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
```

3. **Handling Custom Exceptions:**

```cpp
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
```

4. **Handling Unknown Exceptions (Catch-All):**

```cpp
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
```

These are just a few examples of how exceptions can be handled in C++. Each example demonstrates a different aspect of exception handling, such as catching specific exception types, defining custom exceptions, and handling unknown exceptions.