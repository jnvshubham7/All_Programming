## USER
using name splace 


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

## ASSISTANT
Let's walk through the types of inheritance in C++ with examples.

## Types of Inheritance in C++

C++ supports several types of inheritance, which determine how classes derive properties and behaviors from other classes. Here are the main types:

### 1. Single Inheritance

Single inheritance allows a class to inherit from only one base class.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark();

    return 0;
}
```

In single inheritance, the `Dog` class inherits from the `Animal` class, allowing `Dog` to use the `eat()` method defined in `Animal`.

### 2. Multiple Inheritance

Multiple inheritance allows a class to inherit from more than one base class.

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void displayC() {
        cout << "Class C" << endl;
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

In multiple inheritance, class `C` inherits from both `A` and `B`, allowing it to call methods from both parent classes.

### 3. Multilevel Inheritance

Multilevel inheritance occurs when a class is derived from another derived class.

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void displayC() {
        cout << "Class C" << endl;
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

In multilevel inheritance, `C` inherits from `B`, and `B` inherits from `A`, creating a hierarchy.

### 4. Hierarchical Inheritance

Hierarchical inheritance occurs when multiple classes are derived from a single base class.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
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

In hierarchical inheritance, both `Dog` and `Cat` classes inherit from the `Animal` class, sharing common functionality.

### 5. Hybrid (Virtual) Inheritance

Hybrid inheritance is a combination of two or more types of inheritance. It is often used to solve complex inheritance problems and can involve the use of virtual base classes to prevent ambiguity.

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA();  // Inherited from A through B and C
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}
```

In hybrid inheritance, virtual inheritance is used to ensure that the base class `A` is inherited only once, preventing ambiguity that could arise if it were inherited multiple times through different paths.

These examples demonstrate the various ways inheritance can be used in C++ to create classes with shared behaviors and properties. Each type of inheritance has its own use cases and helps achieve different design goals in object-oriented programming.