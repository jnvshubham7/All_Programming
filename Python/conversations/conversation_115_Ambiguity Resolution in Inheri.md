## USER
Ambiguity Resolution in Inheritance in C++

explain with example 

## ASSISTANT
In C++, ambiguity in inheritance arises when a class inherits from two or more classes, and those base classes have a member with the same name. This creates ambiguity for the compiler, as it may not know which version of the member to use in the derived class. To resolve this ambiguity, C++ provides several rules and mechanisms.

Let's consider an example to illustrate ambiguity resolution:

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    // Uncomment the following line to see the ambiguity.
    // void display() { cout << "Class C" << endl; }
};

int main() {
    C obj;
    obj.A::display();  // Accessing display() of class A
    obj.B::display();  // Accessing display() of class B
    // Uncomment the following line to see the ambiguity.
    // obj.display();   // Error: Ambiguous call to display()
    
    return 0;
}
```

In this example, classes `A` and `B` both have a member function named `display()`. Class `C` inherits from both `A` and `B`. If you uncomment the line `// obj.display();`, it will result in a compilation error because the compiler cannot determine which `display()` function to use.

To resolve the ambiguity, you can use the scope resolution operator `::` to specify which version of the member function to call. In the `main()` function, `obj.A::display()` and `obj.B::display()` demonstrate how to access the `display()` functions of classes `A` and `B`, respectively.

Note that in practical scenarios, avoiding naming conflicts or using virtual inheritance may be preferable to mitigate ambiguity issues.