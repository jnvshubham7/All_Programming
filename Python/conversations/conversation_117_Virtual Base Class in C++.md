## USER
Virtual Base Class in C++

explain with example 

## ASSISTANT
Certainly! Virtual Base Class is used in C++ to address the diamond problem in multiple inheritance. The diamond problem occurs when a class inherits from two classes that have a common base class. To solve this issue, C++ introduces the concept of a virtual base class.

Let's consider an example:

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing." << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void display() {
        cout << "Bat is a mammal and a bird." << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();      // Accessing eat() from Animal
    bat.breathe();  // Accessing breathe() from Mammal
    bat.fly();      // Accessing fly() from Bird
    bat.display();  // Accessing display() from Bat

    return 0;
}
```

In this example, `Animal` is a base class, and `Mammal` and `Bird` are derived classes that virtually inherit from `Animal`. The `Bat` class then inherits from both `Mammal` and `Bird`.

By using the `virtual` keyword in the inheritance declaration (`virtual public Animal`), the `Bat` class avoids having two copies of the `Animal` sub-object, resolving the diamond problem. Now, the `Bat` class has a single shared instance of the `Animal` class.

This way, virtual base classes help prevent ambiguity and ensure that there is only one instance of the shared base class in the inheritance hierarchy.