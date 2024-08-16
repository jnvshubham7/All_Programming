## USER
You have to explain the static keyword, which is used in C++, for initialize the value and also use it for function.

## ASSISTANT
In C++, the `static` keyword has different meanings depending on where it is used: as a static variable or as a static member function.

### Static Variables:
1. **Static Local Variables:**
    - When used inside a function, it retains its value between function calls.
    - It is initialized only once during the first call.
    - Example:

    ```cpp
    #include <iostream>

    void counter() {
        static int count = 0;  // Static local variable
        count++;
        std::cout << "Count: " << count << std::endl;
    }

    int main() {
        counter();  // Count: 1
        counter();  // Count: 2
        counter();  // Count: 3

        return 0;
    }
    ```

2. **Static Class Member Variables:**
    - Shared by all instances of the class.
    - Exists independently of any class object.
    - Example:

    ```cpp
    #include <iostream>

    class MyClass {
    public:
        static int staticVar;  // Static member variable
    };

    int MyClass::staticVar = 42;  // Initialization outside the class

    int main() {
        std::cout << MyClass::staticVar << std::endl;  // Output: 42

        MyClass obj1;
        MyClass obj2;
        obj1.staticVar = 99;

        std::cout << obj2.staticVar << std::endl;  // Output: 99

        return 0;
    }
    ```

### Static Member Functions:
- A static member function belongs to the class rather than the instances of the class.
- It can be called using the class name without creating an object.
- Example:

```cpp
#include <iostream>

class MathOperations {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    int result = MathOperations::add(5, 7);
    std::cout << "Sum: " << result << std::endl;  // Output: Sum: 12

    return 0;
}
```

In this example, `add` is a static member function of the `MathOperations` class. It can be called without creating an instance of the class. The `static` keyword is used to define the static member function.