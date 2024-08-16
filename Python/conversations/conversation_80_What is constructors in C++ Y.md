## USER
What is constructors in C++? You have to explain types and definition all things.

## ASSISTANT
In C++, a constructor is a special member function that gets called when an object is created. It has the same name as the class and does not have a return type. Constructors are responsible for initializing the object's state, setting up any necessary resources, and preparing the object for use.

### Types of Constructors:

1. **Default Constructor:**
   - Definition: A constructor with no parameters.
   - Example:
     ```cpp
     class MyClass {
     public:
         MyClass() {
             // Initialization code
         }
     };
     ```
   - When an object is created without any arguments, the default constructor is invoked.

2. **Parameterized Constructor:**
   - Definition: A constructor with parameters.
   - Example:
     ```cpp
     class MyClass {
     public:
         MyClass(int value) {
             // Initialization code with parameter 'value'
         }
     };
     ```
   - Allows you to initialize object properties with specific values when the object is created.

3. **Copy Constructor:**
   - Definition: A constructor that creates an object by copying the properties of another object of the same type.
   - Example:
     ```cpp
     class MyClass {
     public:
         MyClass(const MyClass& other) {
             // Copy properties from 'other'
         }
     };
     ```
   - Invoked when an object is created as a copy of an existing object.

4. **Destructor:**
   - Definition: A special member function used to clean up resources when an object goes out of scope or is explicitly deleted.
   - Example:
     ```cpp
     class MyClass {
     public:
         ~MyClass() {
             // Cleanup code
         }
     };
     ```
   - Invoked automatically when an object is destroyed.

### Example Usage:

```cpp
#include <iostream>

class Car {
private:
    int speed;

public:
    // Default Constructor
    Car() : speed(0) {
        std::cout << "Car created with default speed." << std::endl;
    }

    // Parameterized Constructor
    Car(int initialSpeed) : speed(initialSpeed) {
        std::cout << "Car created with speed: " << speed << std::endl;
    }

    // Copy Constructor
    Car(const Car& other) : speed(other.speed) {
        std::cout << "Car created by copying another car." << std::endl;
    }

    // Destructor
    ~Car() {
        std::cout << "Car destroyed." << std::endl;
    }
};

int main() {
    // Using constructors
    Car defaultCar;         // Invokes default constructor
    Car parameterizedCar(5); // Invokes parameterized constructor
    Car copiedCar = defaultCar; // Invokes copy constructor

    // Destructor invoked when objects go out of scope
    return 0; // Destructors of all objects invoked here
}
```

In this example, you can see the usage of default, parameterized, copy constructors, and the destructor. Each constructor serves a specific purpose in initializing or copying objects, and the destructor handles cleanup when objects are destroyed.