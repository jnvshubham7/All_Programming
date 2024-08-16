## USER
you have to explain all types of inheritance and you have to also give me the code of C++ with explanation

using namespca std;

## ASSISTANT
Sure, let's go through the types of inheritance in C++ with examples.

### 1. Single Inheritance:

```cpp
#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark();

    return 0;
}
```

In single inheritance, a class inherits from only one base class. Here, `Dog` inherits from `Animal`.

### 2. Multiple Inheritance:

```cpp
#include <iostream>

class A {
public:
    void displayA() {
        std::cout << "Class A" << std::endl;
    }
};

class B {
public:
    void displayB() {
        std::cout << "Class B" << std::endl;
    }
};

class C : public A, public B {
public:
    void displayC() {
        std::cout << "Class C" << std::endl;
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}
```

In multiple inheritance, a class inherits from more than one base class. Here, `C` inherits from both `A` and `B`.

### 3. Multilevel Inheritance:

```cpp
#include <iostream>

class A {
public:
    void displayA() {
        std::cout << "Class A" << std::endl;
    }
};

class B : public A {
public:
    void displayB() {
        std::cout << "Class B" << std::endl;
    }
};

class C : public B {
public:
    void displayC() {
        std::cout << "Class C" << std::endl;
    }
};

int main() {
    C obj;
    obj.displayA();  // Inherited from A
    obj.displayB();  // Inherited from B
    obj.displayC();

    return 0;
}
```

In multilevel inheritance, a class inherits from another derived class. Here, `C` inherits from `B`, and `B` inherits from `A`.

### 4. Hierarchical Inheritance:

```cpp
#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat is meowing." << std::endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.eat();  // Inherited from Animal
    myDog.bark();

    myCat.eat();  // Inherited from Animal
    myCat.meow();

    return 0;
}
```

In hierarchical inheritance, multiple derived classes inherit from a common base class. Here, both `Dog` and `Cat` inherit from `Animal`.