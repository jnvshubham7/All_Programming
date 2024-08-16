## USER
Variable Scopes: - Local variables: Declared within a block or function and have local scope, meaning they are
accessible only within that block or function. - Global variables: Declared outside any block or function and have global scope, meaning
they are accessible throughout the program. - Class variables: Also known as static variables, they are associated with the class and shared among all objects of that class.

## ASSISTANT
Certainly! Let's provide examples for local variables, global variables, and class (static) variables in C++:

### Local Variables:

```cpp
#include <iostream>

void exampleFunction() {
    // Local variable within the function
    int localVar = 10;
    std::cout << "Local Variable: " << localVar << std::endl;
}

int main() {
    // Uncommenting the line below would result in a compilation error
    // since localVar is not accessible outside the function.
    // std::cout << "Trying to access local variable: " << localVar << std::endl;

    exampleFunction();

    return 0;
}
```

In this example, `localVar` is a local variable declared within the `exampleFunction` function. It is accessible only within that function.

### Global Variables:

```cpp
#include <iostream>

// Global variable declared outside any function
int globalVar = 20;

int main() {
    // Accessing the global variable
    std::cout << "Global Variable: " << globalVar << std::endl;

    return 0;
}
```

In this example, `globalVar` is a global variable declared outside any function. It is accessible throughout the program.

### Class (Static) Variables:

```cpp
#include <iostream>

class MyClass {
public:
    // Static variable associated with the class
    static int staticVar;
};

// Initialization of the static variable
int MyClass::staticVar = 30;

int main() {
    // Accessing the static variable using the class name
    std::cout << "Static Variable: " << MyClass::staticVar << std::endl;

    return 0;
}
```

In this example, `staticVar` is a static variable associated with the `MyClass`. It is shared among all objects of that class and can be accessed using the class name.