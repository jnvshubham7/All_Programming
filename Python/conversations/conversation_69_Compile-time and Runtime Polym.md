## USER
Compile-time and Runtime Polymorphism: - Polymorphism refers to the ability of an object to take many forms. - Compile-time polymorphism is achieved through function overloading and operator
overloading, where the appropriate function/operator is selected at compile time based on the arguments and context. - Runtime polymorphism is achieved through function overriding, where the appropriate function is selected at runtime based on the object type.

example 

## ASSISTANT
Certainly! Let's provide examples for both compile-time and runtime polymorphism in C++:

### Compile-Time Polymorphism (Function Overloading):

```cpp
#include <iostream>

class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    MathOperations math;

    // Call the overloaded add function based on the number of arguments
    std::cout << "Sum (2 arguments): " << math.add(10, 20) << std::endl;
    std::cout << "Sum (3 arguments): " << math.add(10, 20, 30) << std::endl;

    return 0;
}
```

In this example, `MathOperations` class has an overloaded `add` function. The appropriate version of the function is selected at compile time based on the number of arguments provided.

### Runtime Polymorphism (Function Overriding):

```cpp
#include <iostream>

// Base class with a virtual function
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// Derived class overriding the virtual function
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

int main() {
    Shape* shapePtr;

    // Create an object of the derived class (Circle)
    Circle circle;

    // Assign the address of the derived class object to the base class pointer
    shapePtr = &circle;

    // Call the draw function (runtime polymorphism)
    shapePtr->draw();

    return 0;
}
```

In this example, `Shape` is a base class with a virtual function `draw`. The `Circle` class is derived from `Shape` and overrides the `draw` function. At runtime, the appropriate `draw` function is called based on the actual object type assigned to the base class pointer.

When you run this program, it will output:

```
Drawing a circle
```

This demonstrates the concepts of compile-time and runtime polymorphism in C++.