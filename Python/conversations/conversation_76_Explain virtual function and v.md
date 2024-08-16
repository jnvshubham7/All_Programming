## USER
Explain virtual function and virtual class with example.

## ASSISTANT
### Virtual Function:
In C++, a virtual function is a member function that you expect to be redefined in derived classes. When a virtual function is declared in a base class, it allows the function to be overridden by a function with the same signature in a derived class. This is a key concept in achieving runtime polymorphism.

#### Example:
```cpp
#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Calls draw() of Circle class
    shape2->draw();  // Calls draw() of Square class

    delete shape1;
    delete shape2;

    return 0;
}
```
In this example, `Shape` is a base class with a virtual function `draw()`. `Circle` and `Square` are derived classes that override the `draw()` function. When calling `draw()` through a pointer to the base class, the appropriate overridden function is called based on the actual type of the object.

### Virtual Class:
In C++, there is no explicit "virtual class" keyword. Instead, the concept of virtual classes is achieved through the use of abstract classes, which have pure virtual functions. An abstract class cannot be instantiated; it serves as a base class for other classes that provide implementations for its pure virtual functions.

#### Example:
```cpp
#include <iostream>

class AbstractShape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual void resize() = 0;
};

class Circle : public AbstractShape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }

    void resize() override {
        std::cout << "Resizing a circle." << std::endl;
    }
};

class Square : public AbstractShape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }

    void resize() override {
        std::cout << "Resizing a square." << std::endl;
    }
};

int main() {
    AbstractShape* shape1 = new Circle();
    AbstractShape* shape2 = new Square();

    shape1->draw();
    shape1->resize();

    shape2->draw();
    shape2->resize();

    delete shape1;
    delete shape2;

    return 0;
}
```
In this example, `AbstractShape` is an abstract class with two pure virtual functions. `Circle` and `Square` are derived classes that provide concrete implementations for these functions. The objects of these derived classes can be manipulated through pointers to the abstract base class, allowing for polymorphic behavior.