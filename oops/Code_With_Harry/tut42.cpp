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



//solve the ambiguity by using scope resolution operator
// obj.A::display();  // Accessing display() of class A
// obj.B::display();  // Accessing display() of class B



